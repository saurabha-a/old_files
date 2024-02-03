#include <iostream>

struct node
{
   int data;
   struct node *next, *prev;
};

void insert(struct node **head, struct node **last, int n)
{
    if(*head == nullptr)
    {
        (*head) = new struct node();
        (*head)->data = n;
        (*head)->next = (*head)->prev = nullptr;
        (*last) = (*head);
    }
    else
    {
        struct node *tmp = new struct node();
        tmp->data = n;
        tmp->next = nullptr;
        tmp->prev = (*last);
        (*last) ->next = tmp;
        *last = (*last)->next;
    }

}

void print(struct node *head)
{
    struct node *tmp = head;
    while(tmp->next!= nullptr) tmp = tmp->next;
    while(tmp!= nullptr)
    {
        std::cout << tmp->data << " ";
        tmp = tmp->prev;
    }
}

int main()
{
    struct node *head =nullptr, *last =nullptr;
    int n, m;
    std::cin >> n;
    for(int i = 1; i<= n; i++)
    {
        std::cin >> m;
        insert(&head, &last, m);
    }
    print(last);
    return 0;
}





