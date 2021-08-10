#include <bits/stdc++.h>
using namespace std;

struct node{
    public:
    int data;
    node*right;
    node*left;
    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
void n(struct node*root)
{
    
    if(root==NULL)
    {
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        struct node* temp = q.front();
        q.pop();
        if(temp!=NULL)
        {
            cout<<temp->data;
            if(temp->left)
             q.push(temp->left);
            if(temp->left)
              q.push(temp->left);
        }else if(!q.empty())
        {
            q.push(NULL);
        }
        
        

    }
    

    
}
int main()
{
  struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    // inorder(root);
    n(root);
  
    return 0;
}