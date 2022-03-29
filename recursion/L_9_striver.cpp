#include <bits/stdc++.h>
using namespace std;

void printsub(int idx,vector<int>&a,vector<int> v,int n,int sum,int m)
{
    if(m==0)
    {
        for(auto it: v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i= idx;i<n;i++)
    {
        if(i>idx && a[i]==a[i-1]) continue;
        if(a[i]>m) break;
        v.push_back(a[i]);
        printsub(i+1,a,v,n,sum,m-a[i]);
        v.pop_back();
    }
    
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int idx =0;
    int sum = 0;
    vector<int> v;
    printsub(idx,a,v,n,sum,m);
    return 0;
}