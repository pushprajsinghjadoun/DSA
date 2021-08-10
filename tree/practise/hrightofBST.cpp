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

int maxheight(struct node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+ max(maxheight(root->left),maxheight(root->right));
}
int samelevel(struct node*root,int n,int & k)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->data==n)
    {
        return 1;
    }
    if(root->data==n)
     {
         return 1;
     }
     k++;
    
    int l = samelevel(root->left,n,k);
    int r = samelevel(root->right,n,k);
    int ans = r;
    
    return k;
}

void preorder(struct node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}

void inorder(struct node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(struct node* root)
{
    if(root == NULL)
    {
        return;
    }
    
    postorder(root->left);
   
    postorder(root->right);
    cout<<root->data<<" "<<endl;
}

int main()
{
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->right->right = new node(6);

    // preorder(root);
    // inorder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<maxheight(root);
    int k = 0;
    cout<<samelevel(root,1,k);
    return 0;
}