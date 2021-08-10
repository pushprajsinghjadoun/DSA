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

void findelevel(struct node*root,struct node*x,int index,int &level)
{
    if(root== nullptr or level)
    {
        return;
    }
    if(root==x)
    {
        level = index;
    }
    findelevel(root->left,x,index+1,level);
    findelevel(root->right,x,index+1,level);
}
void printlevel(struct node*root,struct node*knode,int level)
{
    if(root==NULL);
    {
        return;
    }
    if(level==1)
    {
        cout<<root->data<<" ";
        return;
    }
    if(not(root->left and root->left==knode or root->right && root->right==knode))
    {
        printlevel(root->left,knode,level-1);
        printlevel(root->right,knode,level-1);
    }
}

void printallcousins(struct node*root,struct node*knode)
{
    int level =0;
    findelevel(root,knode,1,level);
    printlevel(root,knode,level);
}

int main()
{
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    // preorder(root);
    // inorder(root);
    // cout<<endl;
    // postorder(root);
    
   printallcousins(root,root->left->left);
    return 0;
}