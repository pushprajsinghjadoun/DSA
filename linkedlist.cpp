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

void insertathead(node* &head, int val)
{
    node*n = new node(val);
    n->next = head;
    head=n;
}

void display(node* &head){
    node* temp  = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}
bool search(node* &head,int key)
{
    node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data ==key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deletion(node* &head, int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        node* todelete = head;
    head = head->next;

    delete todelete;
        return;
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp = temp->next;
    }
    node * todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

void deleteathead(node* &head)
{
    node* todelete = head;
    head = head->next;

    delete todelete;

}
node* reverse(node* &head)
{
    node* preptr = NULL;
    node* currptr =   head;
    node* nextptr;
    while(currptr!=NULL)
    {
        nextptr = currptr->next;
        currptr->next = preptr;
        preptr = currptr;
        currptr = nextptr;
    }
    return preptr;
}

void makecycle(node* &head, int pos)
{
    node* temp = head;
    node* startNode;

    int count = 1;

    while (temp->next!=NULL)
    {
        if (count==pos)
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
    
}

bool detectcycle(node* &head)
{
    node* slow= head;
    node* fast = head;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow)
        {
            return true;
        }
    }
    return false;
    
}
void removeCycle(node* &head)
{
    node* slow= head;
    node* fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow!=fast);

    fast = head;
    while (slow->next!=fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
    
    
}

// int height(node*root,int &parent,int value,int height)
// {
//     if(!curr)
//     {
//         return 0;
//     }
//     if(curr->val==value)
//     {
//         return height;
//     }
//     parent = root->data;
//     int left = height(root->left,parent,value,height+1);
//     if(left)
//     {
//         return left;
//     }
//     parent = root->data;
//     int right = height(root->right,parent,value,height+1);
//     return right;
// }

// bool iscousin(node*root,int x,int y)
// {
//     if(root->data==x || root->data==y)
//     {
//         return false;
//     }
//     int parent = -1;
//     int xheight = height(root,parent,x,0);
//     int yparent = -1;
//     int yHeight = heigh(root,parent,y,0);
//     if(parent!=yparent && xheight==yHeight)
//     {
//         return true;
//     }else{
//         return false;
//     }
// }

int main()
{
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    makecycle(head,2);
    cout<<detectcycle(head);
    removeCycle(head);
    display(head);
    // insertathead(head,10);
    // display(head);
    // cout<<search(head,4);
    // deletion(head,3);
    // deleteathead(head);
    // deletion(head,4);

    // display(head);
    // node* newhead = reverse(head);
    // display(newhead);

    

    return 0;
}