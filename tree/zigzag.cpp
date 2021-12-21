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

void zigzag(node*root)
{
    if(root==NULL) return;

    stack<node*> current;
    stack<node*> nextlevel;
    bool is = true;
    current.push(root);

    while (!current.empty())
    {
        node*temp = current.top();
        current.pop();
        if(temp)
        {
            cout<<root->data<<" ";
            if(is)
            {
                if(temp->left)
                {
                    zigzag(temp->left);
                }
                if(temp->right)
                {
                    zigzag(temp->right);
                }
            }else
            {
                if(temp->right)
                {
                    zigzag(temp->right);
                }
                if(temp->left)
                {
                    zigzag(temp->left);
                }
            }
        }
        if(current.empty())
        {
            is = !is;
            swap(current,nextlevel);
        }
    }
    

}


int main()
{
    
    //         1
    //       /  \
    //     2      3
    //    / \    
    //   4   5
    //    \   /
    //    6  7
       



    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->left->left->right = new node(6);
    root->left->right->left = new node(7);
    zigzag(root);
    return 0;
}