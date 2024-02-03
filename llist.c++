#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class linkedList {
    public:
        struct node *head, *last;
    public:
        linkedList() {
	    head = last = NULL;
	}

	void append(int data) {
	    if(head == NULL) {
                head = new struct node;
	        head -> data = data;
	        head -> next = NULL;
		last = head;
	    }
	    else {
	        struct node *tmp = new struct node;
                tmp -> data = data;
	        tmp -> next = NULL;
	        last->next = tmp;
		last = last -> next;
	    }
	}

	void print() {
            struct node *current = head;
	    while(current != NULL) {
	        cout << current->data << " ";
		current  = current->next;
            }
        cout << endl;
       }
    void swap(struct node *i, struct node *j) {
        struct node *ptr1 = head, *ptr2 = head, *ptr3 = NULL;
        while(ptr1-> next != i) ptr1 = ptr1->next;
        while(ptr2->next != j) ptr2 = ptr2->next;
        ptr3 = i->next;
        i->next = j->next;
        j->next = ptr3;
        ptr1->next = j;
        ptr2->next = i;

    }
    struct node* index(int a){
        struct node *ptr = head;
        for(int i = 1;i < a; ++i) ptr = ptr->next;
        return ptr;
    }
    void insert(int data, int pos)
    {
        struct node *ptr = index(pos);
        struct node *tmp1 = head;

        if(ptr == head)
        {
            struct node *t = new struct node;
            t->data = data;
            t->next = head;
            head =  t;
        }
        else
        {
            while(tmp1->next != ptr) tmp1 = tmp1->next;
            struct node *t = new struct node;
            t->data = data;
            t->next = ptr;
            tmp1->next = t;
        }
    }
    void reverse(struct node *ptr)
    {
        struct node *temp = ptr->next;
        if(ptr->next == NULL) {head = ptr; return;}
        else
        {
            reverse(ptr->next);
            temp->next = ptr;
            ptr->next = NULL;
            return;
        }

    }
};

int main() {
    linkedList obj = linkedList();
    int n,a;
    cout<<"enter the size(not less than 6): " << endl;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a;
	obj.append(a);
    }
    obj.print();
    obj.swap(obj.index(3), obj.index(6));
    obj.print();
    obj.insert(34, 1);
    obj.print();
    obj.Reverse(obj.head);
    obj.print();
    return 0;
}
