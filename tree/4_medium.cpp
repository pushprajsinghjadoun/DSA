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

bool checkbothtree(node* root,node*root1)
{
    
    if(root==NULL and root1==NULL)
    {
        return 1;
    }
    return (root&&root1) &&(root->data == root1->data)&&checkbothtree(root->left,root1->left) && checkbothtree(root->right,root1->right);
}

int main()
{
    struct node*root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    
    struct node*root1 = new node(1);
    root1->left = new node(2);
    root1->right = new node(3);
    if(checkbothtree(root,root1))
    {
        cout<<"yes";
    }else
    {
        cout<<"no";
    }

    return 0;
}