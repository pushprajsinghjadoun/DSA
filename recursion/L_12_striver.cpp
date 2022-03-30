#include <bits/stdc++.h>
using namespace std;

void permutation(vector<int> &a,vector<int> f,vector<int> &v,int n)
{
    if(v.size()==n)
    {
        for(auto i : v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(!f[i])
        {
            v.push_back(a[i]);
            f[i]=1;
            permutation(a,f,v,n);
            v.pop_back();
            f[i]=0;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> f(n,0);
    vector<int> v;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    permutation(a,f,v,n);
    return 0;
}