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

int findDepth(struct node* root, int x)
{
    // Base case
    if (root == NULL)
        return -1;
 
    // Initialize distance as -1
    int dist = -1;
 
    
    if ((root->data == x)
 
      
        || (dist = findDepth(root->left, x)) >= 0
 
        
        || (dist = findDepth(root->right, x)) >= 0)
 
        
        return dist + 1;
 
    return dist;
}


int main()
{
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    cout<<findDepth(root,2)<<endl;
    
    return 0;
}