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
        left = NULL;
        right = NULL;
    }
};
int sumofk(node*root,int val)
{
    if(root==NULL)
    {
        return -1;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level =0;
    int sum=0;
    while (!q.empty())
    {
        node*temp = q.front();
        q.pop();
        if(temp !=NULL)
        {
            if(level ==val)
            {
                sum+=temp->data;
            }
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
            level++;
        }

    }
    return sum;
    
}

void levelordertravel(node*root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
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

int level(node*root)
{
    int depth=0;
    if(root==NULL)
    {
        return 0;
    }
    else{
        int ldepth = level(root->left) + 1;
        int rdepth = level(root->right) + 1;
        depth = max(ldepth,rdepth);
        return depth;
        
    }
}

int sumofallnodes(node*root)
{
   int sum =0,sumleft=0,sumright=0;
   if(root==NULL)
   {
       return 0;
   }
   else{
       if(root->left!=NULL)
       {
           sumleft = sumofallnodes(root->left);
       }
       if(root->right!=NULL)
       {
           sumright = sumofallnodes(root->right);
       }
       return (root->data + sumleft  + sumright);

   }
}

void preorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->right->right = new node(6);
    cout<<sumofk(root,1);
    return 0;
}