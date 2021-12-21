#include <bits/stdc++.h>
using namespace std;

struct node{
    public:
    int data;
    node*left;
    node*right;

    node(int val)
    {
        data = val;
        left=NULL;
        right = NULL;
    }
};

int parent(node*root,int k,int h=0,node*p)
{
    if(root==NULL)
    {
        return 0;
    }
    p = root;
    
        if(root->left->data==k)
        {
            return h+1;
        }
        if(root->right->data==k)
        {
            return h+1;
        }
        int l = parent(root->left,k,h+1,p);
        int r = parent(root->right,k,h+1,p);
        cout<<p<<" ";
        return max(l,r)+1;
        
}

int height(node*root,int k,int  h=0)
{
    
    if(root == NULL)
    {
        return 0;
    }
    
        if(root->data==k)
        {
            return h;
        }
        
      int l =  height(root->left,k,h+1);
      int r =  height(root->right,k,h+1);
 
      
      return max(l,r);

    
}
void printlevelorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node*temp = q.front();
        q.pop();
        if(temp!=NULL)
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }else if(!q.empty())
        {
            q.push(NULL);
        }
    }
    
}


int main()
{
    struct node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    node*temp = NULL;
  
    

    return 0;
}