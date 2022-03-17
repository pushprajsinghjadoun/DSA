#include <bits/stdc++.h>
using namespace std;

void p(string s,string &o, int n,int k)
{
    // cout<<"||"<<s<<"||"<<k<<endl;
    
    if(s.size()==k)
    {
        cout<<s<<endl;
        return;
    }
    for(int i =k;i<n;i++)
    {
        swap(s[i],s[0]);
        p(s,o,n,k+1);
        swap(s[i],s[0]);
    }
}

int main()
{
    string s="123";
    string o = "";
    int n= s.size();
    int k =0;
    p(s,o,n,k);
    return 0;
}