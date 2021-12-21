
#include <bits/stdc++.h>
using namespace std;


class node
{
	public:
	int data;
	node* left, *right;
};
void printArray(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printpathrec(node*root,int arr[],int length,int k)
{
    if(root==NULL)
    {
        return;
    }
    arr[length]= root->data;
    length++;
    if(root->left==NULL && root->right==NULL)
    {
        printArray(arr,length);
        
    }else{
        printpathrec(root->left,arr,length,k);
        printpathrec(root->right,arr,length,k);
    }
}


void printpath(node*root,int k)
{
    int path[1000];
    printpathrec(root,path,0,k);
}



node* newNode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return(Node);
}


int main()
{
	node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

    printpath(root,3);
	return 0;
}