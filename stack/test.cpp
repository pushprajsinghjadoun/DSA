#include <iostream>
using namespace std;
#define n 100

class stack{
    int top;
    int* arr;

    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"Stack overflow";
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty";
            return;
        }
        top--;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"Stack is empty";
            return -1;
        }
        return arr[top];

    }
    bool emp()
    {
        return top==-1;
    }
};

int main()
{
    stack st;
    st.push(2);
    st.push(4);
    st.push(23);
    st.push(5);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.emp();
    return 0;
}