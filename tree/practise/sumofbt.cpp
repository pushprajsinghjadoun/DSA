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
int convertosum(struct Node*root)
{
    if(root ==NULL)
     return 0;
    int left = convertosum(root->left);
    int right = convertosum(root->right);

    int old = root->data;
    root->data = left + right;
    

    return old + root->data;
}

void postorder(struct Node*root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    struct Node *root = NULL;
  root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->right->right = new Node(4);
  root->right->right->right = new Node(4);
  root->right->right->left = new Node(5);
  postorder(root);
  convertosum(root);
  postorder(root);
    return 0;
}



