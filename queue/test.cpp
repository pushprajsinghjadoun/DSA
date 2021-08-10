#include <bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;
    public:
    Stack()
    {
        N=0;
    }
    void push(int val)
    {
        q2.push(val);
        N++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
        
    }
    void pop()
    {
        q1.pop();
        N--;
    }
};
int main()
{
    return 0;
}