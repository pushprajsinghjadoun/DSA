#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val)
    {
        data = val;
        next =NULL;

    }
};
void insertattail(node* &head,int val)
{
    node*n = new node(val);
    node*temp = head;
    if(head==NULL)
    {
        head = n;
        return;
    }
    
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    
    temp->next = n;
    

}
void insertathead(node* &head, int val)
{
    
    node*n = new node(val);
    node*temp = head;
    if(head==NULL)
    {
        head = n;
    }
    n->next = temp;
    head = n;
}
void display(node* &head)
{
    node*temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}
node* reverse(node* head)
{
    node*currptr = head;
    node*prev = NULL;
    node* nextptr;
    while (currptr!=NULL)
    {
        nextptr = currptr->next;
        currptr->next = prev;
        prev = currptr;
        currptr = nextptr;

    }
    return prev;
    

}
void sums(node* &head)
{
    node*temp = head;
    int sum =0;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        sum+=temp->data;
        temp = temp->next;
    }
    cout<<sum<<endl;
    
}



int main()
{
    node*head = NULL;
    insertattail(head,4);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    
    // node* newhead = reverse(head);
    // display(newhead);
    // 
    sums(head);
    return 0;
}
