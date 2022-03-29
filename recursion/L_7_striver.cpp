#include <bits/stdc++.h>
using namespace std;

void printsub(int idx,vector<int>&a,vector<int> v,int n,int sum,int m)
{
    if(idx==n)
    {
        if(sum==m)
    {
        for(auto it : v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

        return;
    }
    
    printsub(idx+1,a,v,n,sum,m);
    sum = sum + a[idx];
    v.push_back(a[idx]);
    printsub(idx+1,a,v,n,sum,m);
    v.pop_back();
    sum = sum - a[idx];
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