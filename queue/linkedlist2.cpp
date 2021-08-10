#include <bits/stdc++.h>
using namespace std;

struct Qnode
{
    int data;
    Qnode*next;
    Qnode(int val)
    {
        data = val;
        next = NULL;
    }
};
struct Queue
{
    Qnode* front;
    Qnode* back;
    Queue()
    {
        front = back =NULL;
    }
    void push(int val)
    {
        Qnode*temp = new Qnode(val);
        if(back==NULL)
        {
            front = back = temp;
            return;
        }
        back->next = temp;
        back = temp;
    }
    void rem()
    {
        if(front==NULL)
        {
            cout<<"no elemenet in the stack";
            return;
        }
        Qnode* temp = front;
        front = front->next;
        if(front==NULL)
        {
            back ==NULL;
        }
        delete temp;
        
    }
};




int main()
{
    
    Queue q;
    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    cout<<(q.front)->data<<" "<<endl;
    cout<<(q.back)->data<<" "<<endl;


    return 0;
}