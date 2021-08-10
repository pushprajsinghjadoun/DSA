#include <bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;

};

 void deletion(node * &head, int val){
     node * temp = head;
     while(temp->next->data !=val){
         temp = temp->next;
     }
     node * todelete = temp->next;
     temp->next = temp->next->next;
     delete todelete;

 }

 void printList(node *n){
     while(n!=NULL){
         cout << n->data << " ";
         n = n->next;
     }
 }

int main(){
    node * head = NULL;
    node * second = NULL;
    node * third = NULL;

    head = new node();
    second = new node();
    third = new node();

    head -> data  = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);
    deletion(head,3);
    printList(head);


    return 0;
}