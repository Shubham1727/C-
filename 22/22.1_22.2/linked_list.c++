#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(node *&head, int val)
{

    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

 
    temp->next = n;
}

void display(node* head)
{
    node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
     cout<<"NULL"<<endl;
    cout << endl;
}

void insertathead(node* &head , int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}

void deletion(node* &head , int val)
{
    node* temp = head;
    while (temp->next->data!=val)
    {
        temp = temp->next;
    }

    node* todelete = temp->next;
    temp->next=temp->next->next;

    delete todelete; 
    
}
int main()
{
    node *head = NULL;
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    display(head);

    deletion(head , 3);
    display(head);
    return 0;
}