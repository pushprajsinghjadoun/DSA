#include <iostream>
#include <stack>
using namespace std;

void reversesent(string s)
{
    stack<string> st;
    for(int i=0; i<s.length();i++)
    {
        string world="";
        while(s[i]!=' '&& i<s.length())
        {
            world+=s[i];
            i++;
        }
        st.push(world);
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    
    
}
int main()
{
    string s="hey, how are you doing?";
    reversesent(s);
}