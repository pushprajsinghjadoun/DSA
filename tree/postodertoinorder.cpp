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

int search(int inorder[], int start,int end, int val)
{
    for(int i = start; i<=end; i++)
    {
        if(inorder[i]==val)
        {
            return i;
        }
    }
    return -1;
}
node* buildetree(int postorder[], int inorder[], int start, int end)
{
    
    static int idx = 4;
    if(start>end)
    {
        return NULL;
    }

    int val = postorder[idx];
    idx--;
    node* curr = new node(val);
    if(start==end)
    {
        return curr;

    }
    int pos = search(inorder,start,end,val);
    curr->right = buildetree(postorder,inorder,pos+1,end);
    curr->left = buildetree(postorder,inorder,start,pos-1);
    return curr;


}
void inorderprint(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}
int main()
{
    int postorder[] = {9,15,7,20,3};
    int inorder[] = {9,3,15,20,7};
    node* root = buildetree(postorder,inorder,0,4);
    inorderprint(root);
    cout<<endl;
    return 0;
}