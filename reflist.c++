#include <iostream>
template< typename T >
struct node;

template< typename T >
struct links {
  node<T>& prev;
  node<T>& next;
  link(node<T>* prv, node<T>* nxt); // omitted
};

template< typename T >
struct node {
  T data;
  links<T> linked_nodes;
  node(const T& d, node* prv, node* nxt); // omitted
};

// technically, this causes UB...
template< typename T >
void my_list<T>::link_nodes(node<T>* prev, node<T>* next)
{
  node<T>* prev_prev = prev.linked_nodes.prev;
  node<T>* next_next = next.linked_nodes.next;
  prev.linked_nodes.~links<T>();
  new (prev.linked_nodes) links<T>(prev_prev, next);
  next.linked_nodes.~links<T>();
  new (next.linked_nodes) links<T>(next, next_next);
}

template< typename T >
void my_list<T>::insert(node<T>* at, const T& data)
{
  node<T>* prev = at;
  node<T>* next = at.linked_nodes.next;
  node<T>* new_node = new node<T>(data, prev, next);

  link_nodes(prev, new_node);
  link_nodes(new_node, next);
}
