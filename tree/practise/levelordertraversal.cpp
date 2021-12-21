#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void levelordertraversal(node*root)
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
        node*temp = q.front();
        q.pop();
        if (temp!=NULL)
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
    struct node* root = new node(1);
   
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->left->right = new node(6);
    root->left->right->left = new node(7);
       levelordertraversal(root);
    return 0;
}