#include <iostream>
using namespace std;

void findpermutation(string s,int k,int n)
{
    if(k==n)
    {
        cout<<s;
    }else{
        for(int i=k; i<=n;i++)
     {
         int h = i;
         s = swap(s,k,i);
         findpermutation(s,k+1,n);
         
     }
    }
    
}

string swap(string s,int k,int i)
{
    char t;
    t = s[k];
    s[k] = s[i];
    s[i] = t;
    return s;
}
int main()
{
    string s;
    cout<<s;
    findpermutation(s,0,s.length()-1);
    return 0;
}