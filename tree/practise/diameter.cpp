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

int sumofall(struct node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int sumleft = sumofall(root->left);
    int sumright = sumofall(root->right);
    return root->data + sumleft +sumright;
}
int height(struct node*root,int x,int level)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root->data==x)
    {
        
        return level;
    }
    int l = height(root->left,x,level+1);
   int r = height(root->right,x,level+1);
   if (l!=-1)
   {
       return l;
   }
   if(r!=-1)
   {
       return r;
   }
   

    return level;
    
}
static int heightt(struct node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1 + max(heightt(root->left),heightt(root->right));
}

static int diameter(struct node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lheight = heightt(root->right);
    int rheight = heightt(root->left);
    int ldiameter = diameter(root->left);
    int rdiameter =  diameter(root->right);
    return max(lheight+rheight+1,max(ldiameter,rdiameter));
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
    // cout<<sumofall(root);
    // cout<<height(root,4,0);
    cout<<diameter(root);

    
    return 0;
}