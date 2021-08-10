#include <iostream>
using namespace std;
#define n 100
class queue{
    int* arr;
    int back;
    int front;
    public:
    queue()
    {
        arr =new int[n];
        back = -1;
        front = -1;

    }
    void push(int x)
{
    if(back==n-1){
        cout<<"No such data found";
        return;
    }
    back++;
    arr[back]=x;
    if(front==-1)
    {
        front++;
    }
}
void pop()
{
    if(front ==-1|| back<front)
    {
        cout<<"No such data found";
        return;
    }
    front++;
}
int peak(){
    if(front ==-1|| back<front)
    {
        cout<<"No such data found";
        return -1;
    }
    return arr[front];
}
};


int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.peak()<<endl;
    q.pop();
    cout<<q.peak()<<endl;
    q.pop();
    
    cout<<q.peak()<<endl;
    q.pop();
}