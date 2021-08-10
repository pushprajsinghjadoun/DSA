#include <iostream>
using namespace std;

class node{
    public:
    
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertattail(node* &head, int val)
{
    if(head==NULL)
    {
        node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;

    }
    node* n = new node(val);
    node* temp = head;

    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void insertathead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    node* head =NULL;
    insertattail(head,1);
    insertattail(head,20);
    insertattail(head,2);
    display(head); 
    insertathead(head,5);
    display(head);  
    return 0;
}