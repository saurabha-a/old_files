#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

class linkedList {
    private:
        struct node *head, *last;
    public:
        linkedList() {
	    head = last = NULL;
	}

	void insert(int data) {
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

	void print()
	{
        struct node *current = head;
	    while(current != NULL)
        {
	        cout << current->data << " ";
		    current  = current->next;
        }
    }

};

int main() {
    linkedList obj = linkedList();
    int n,a;
    cout<<"enter the size: "<<endl;
    cin>>n;
    cout << "enter the elements to be linked list seperated by space\n";
    for(int i=0;i<n;i++) {
        cin>>a;
	    obj.insert(a);
    }
    obj.print();
    return 0;
}
