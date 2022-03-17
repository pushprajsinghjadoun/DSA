#include <bits/stdc++.h>
using namespace std;

void p(string &s,int k,int n,vector<string> &res)
{
    if(s.size()==k)
    {
        res.push_back(s);
        return;
    }
    for(int i=k;i<n;i++)
    {
        swap(s[i],s[0]);
        p(s,k+1,n,res);
        swap(s[i],s[0]);
        
    }
    
}

vector<string> findPermutations(string &s)
{
    int k =0;
    int n = s.size();
    vector<string> r;
    p(s,k,n,r);
    return r;
    
}

int main()
{
    string s = "aab";
    vector<string> re = findPermutations(s);
    for(int i=0;i<re.size();i++)
    {
        cout<<re[i]<<" ";
    }
    return 0;
}