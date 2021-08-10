#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node*left;
    struct Node*right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool isfbt(struct Node*root)
{
   if(root==NULL)
   {
       return true;
   }
   if(root->left == NULL && root->right == NULL)
   {
       return true;
   }
   if((root->left) && (root->right))
   {
       return (isfbt(root->left) && isfbt(root->right));
   }
   return false;
}
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


int main()
{
    struct Node *root = NULL;
  root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->left->right->left = new Node(6);
  root->left->right->right = new Node(7);
  postorder(root);

    if(isfbt(root))
    {
        cout<<"yes";
    }else
    {
        cout<<"FALSE";
    }
    return 0;
}