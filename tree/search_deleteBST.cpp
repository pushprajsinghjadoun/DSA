#include <iostream>
using namespace std;

struct Node{
    int data;

    Node*left; Node* right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node* search(Node* root, int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data == key)
    {
        return root;
    }
    if(root->data > key)
    {
        return search(root->left,key);
    }
    return search(root->right,key);
}

Node* inordersu(Node*root)
{
    Node* curr = root;
    while (curr&& curr->left!=NULL)
    {
        curr = curr->left;
    }
    return curr;
    
}

Node* deleteval(Node* root,int key)
{
    if(key<root->data)
    {
        root->left = deleteval(root->left,key);

    }
    if(key>root->data)
    {
        root->right = deleteval(root->right,key);
    }
    else{
        if(root->left==NULL)
        {
            Node* temp = root->right;
            free(root);
            return temp;
        }else if(root->right==NULL)
        {
            Node* temp = root->left;
            free(root);
            return temp;
        }
        Node* temp = inordersu(root->right);
        root->data = temp->data;
        root->right = deleteval(root->right,temp->data);
    }
    return root;
}
void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}

int main(){
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left = new Node(1);
    root->left->right =new Node(3);
    root->right->right = new Node(6);
    // if(search(root,10)==NULL)
    // {
    //     cout<<" key doesn't exist";
    // }else{
    //     cout<<"key exists";
    // }
    inorder(root);
    root = deleteval(root,5);
    inorder(root);
    return 0;
}