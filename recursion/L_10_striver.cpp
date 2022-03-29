#include <bits/stdc++.h>
using namespace std;

vector<int> ans;

void printsub(int idx,vector<int>&ans,vector<int>&a,int n,vector<int> v)
{
    if(idx==n)
    {
        int sum = 0;
        for(auto it : v)
        {
            sum+=it;
        }
        ans.push_back(sum);
        // cout<<sum;
        cout<<endl;
        return;
    }
    printsub(idx+1,ans,a,n,v);
    v.push_back(a[idx]);
    printsub(idx+1,ans,a,n,v);
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
    vector<int> ans;
    printsub(idx,ans,a,n,v);
    sort(ans.begin(),ans.end());
    for(auto i : ans)
    {
        cout<<i<<" ";
    }
    return 0;
}