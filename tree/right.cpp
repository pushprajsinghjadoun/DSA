#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node * right;
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
    cout<<root->data<<" ";
}

int convertToSumTree(Node* root)
{
    // base case: empty tree
    if (root == nullptr) {
        return 0;
    }
 
    // recursively convert the left and right subtree first before
    // processing the root node
    int left = convertToSumTree(root->left);
    int right = convertToSumTree(root->right);
 
    // stores the current value of the root node
    int old = root->data;
 
    // update root to the sum of left and right subtree
    root->data = left + right;
    cout<<root->data<<" ";
 
    // return the updated value + the old value (sum of the tree rooted at
    // the root node)
    
    return root->data + old;
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
  convertToSumTree(root);
  postorder(root);
    return 0;
}