#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};


void postorder(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }
    
    postorder(root->left);
   
    postorder(root->right);
    cout<<root->data<<" "<<endl;
}

int depth( Node* root)
{
    int g =0;
    while (root!=NULL)
    {
        g++;
        root = root->left;
    }
    return g;
    
}
bool perefectroot(struct Node* root, int d, int level =0)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->left ==NULL && root->right  ==NULL)
    {
        return (d==level+1);
    }
    if(root->left==NULL || root->right ==NULL)
    {
        return false;
    }
    return (perefectroot(root->left,d,level+1)&& perefectroot(root->right,d, level+1));
}
bool isperect(struct Node* root)
{
    int d = depth(root);
    return perefectroot(root,d);
}
int main()
{
    struct Node *root = NULL;
  root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->right = new Node(10);
  root->right->left = new Node(141);
   if(isperect(root))
    {
        cout<<"yes";
    }else
    {
        cout<<"No";
    }
    return 0;
}