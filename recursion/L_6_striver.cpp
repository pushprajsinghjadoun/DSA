#include <bits/stdc++.h>
using namespace std;

void printsub(int idx,vector<int>&a,int n,vector<int> v)
{
    if(idx==n)
    {
        for(auto it : v)
        {
            cout<<it<<" ";
        }
        if(v.size()==0)
        {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    printsub(idx+1,a,n,v);
    v.push_back(a[idx]);
    printsub(idx+1,a,n,v);
    v.pop_back();
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int idx =0;
    vector<int> v;
    printsub(idx,a,n,v);
    return 0;
}