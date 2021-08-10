#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void inserattail(node* &head, int val)
{
    node*n = new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node*temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next =n;
    
}
void display(node* head)
{
    node*temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
void searchd(node* &head,int key)
{
    node* temp = head;
    while (temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    
    

}
void insertathead(node* &head,int val)
{
    node*n = new node(val);
    n->next = head;
    head = n;
}
void deletea(node* &head,int val)
{
    node*temp = head;
    while (temp->next->data!=val)
    {
        temp =temp->next;
    }
    node* todelete = temp->next;

    temp->next = temp->next->next;
    delete todelete;
    
}
int main()
{
    node* head =NULL;
    inserattail(head,1);
    inserattail(head,2);
    inserattail(head,3);
    inserattail(head,4);
    inserattail(head,6);
    insertathead(head,12);
    display(head);
    deletea(head,6);
    display(head);
    return 0;
}