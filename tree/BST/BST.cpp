#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node*left,  *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }

};

Node* insert(Node*root, int val)
{
    if(root== NULL)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left = insert(root->left,val);
    }else{
        root->right = insert(root->right, val);
    }
    return root;
}
void inorder(Node*root)
{
    if(root==NULL)
    {
        return;
    }
    
    inorder(root->left);
    
    cout<<root->data<<" ";
    inorder(root->right);
     
}

Node* search(Node*root, int key){
    if(root->data==key)
    {
        return root;
    }
    if(root->data>key)
    {
        return search(root->left,key);
    }
    return search(root->right,key);
}
Node * inordersucc(Node*root){
    Node*curr = root;
    while(curr&& curr->left!=NULL)
    {
        curr = curr->left;
    }
    return curr;
}
Node * delection(Node*root,int key)
{
    if(key<root->data)
    {
        root->left = delection(root->left,key);

    }
     if(key>root->data)
    {
        root->right = delection(root->right, key);
    }else{
        if(root->left==NULL)
        {
            Node*temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            Node*temp = root->left;
            free(root);
            return temp;
        }
        Node* temp = inordersucc(root->right);
        root->data = temp->data;
        root->right = delection(root->right, temp->data);

    }
    return root;

}
int main()
{
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left = new Node(1);
    root->left->right =new Node(3);
    root->right->right = new Node(6);
    // inorder(root);
    // if(search(root,5)==NULL)
    // {
    //     cout<<"key does not exist";
    // }else{
    //     cout<<"key exist";
    // }
    inorder(root);
    cout<<endl;
    root = delection(root,5);
    inorder(root);
    return 0;
}