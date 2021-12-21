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

void printleaf(node*root)
{
    if(root ==NULL) return;
    printleaf(root->left);
    if(root->left==NULL && root->right==NULL)
    {
        cout<<root->data<<" ";
    }
    printleaf(root->right);
}
void rightmost(node*root)
{
    if(root==NULL) return;
    if(root->right)
    {
        rightmost(root->right);
        cout<<root->data<<" ";
    }else if(root->left)
    {
        rightmost(root->left);
        cout<<root->data<<" ";
    }
}

void leftmost(node*root)
{
    if(root==NULL) return;
    if(root->left)
    {
        cout<<root->data<<" ";
        leftmost(root->left);
    }else if(root->right)
    {
        cout<<root->data<<" ";
        leftmost(root->right);
    }
}
void printallboun(node*root)
{
    if(root==NULL) return;
    cout<<root->data<<" ";

    leftmost(root->left);

    printleaf(root->left);
    printleaf(root->right);

    rightmost(root->right);
}

int main()
{
    
    //         1
    //       /  \
    //     2      3
    //    / \    
    //   4   5
    //    \   /
    //    6  7
       



    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->left->right = new node(6);
    root->left->right->left = new node(7);
    printallboun(root);
    return 0;
}