#include <bits/stdc++.h>
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

node* p(node* &head)
{
    node* temp = head;
    node*odd = NULL;
    node*even = NULL;
    bool flag1 = false;
    bool flag2 = false;
    node*ne;
    while (temp!=NULL)
    {
        if(temp->data%2==0)
        {
            cout<<endl;
            if(!flag1)
            {
                cout<<"even flag"<<" ";
                flag1 = true;
                ne = temp;
                even = temp;
                even->next
                cout<<even->data<<"->"<<endl;
            }
            // else
            // {
            //     cout<<"even"<<" ";
            //     ne = temp;
            //     even->next = temp;
            //     even->next->next = NULL;

            // }
        }else
        {
            cout<<endl;
            // if(!flag2)
            // {
            //     cout<<"odd flag"<<" ";
            //     flag2 = true;
            //     odd = temp;

            // }
            // else{
            //     cout<<"even"<<" ";
            //     ne = temp;
            //     odd->next = temp;
            //     odd->next->next = NULL;
            // }
        }
        temp = temp->next;
        
    }
    // even->next = odd;
    // cout<<endl;
    return ne;
    
}

void insertattail(node* &head, int val){
      node* n = new node(val);
      if(head==NULL)
      {
          head = n;
          return;
      }
      node* temp = head;
      while (temp->next!=NULL)
      {
          temp = temp->next;

      }
      temp->next =n;
      
      
}
void print(node* &head)
{
    node*temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
}

int main()
{
    node*head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    insertattail(head,6);
    print(head);
    node*k = p(head);
    print(k);
    
    return 0;
}