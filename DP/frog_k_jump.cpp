#include <bits/stdc++.h>
using namespace std;

int f(int ind,vector<int>&v,vector<int>&dp,int k)
{
    if(ind==0)
    {
        return 0;
    }
    if(dp[ind]!=-1) return dp[ind];
    int minsub =INT_MAX;
    for(int i=1;i<=k;i++)
    {
        int temp = INT_MAX;
        if(ind-i>=0)
        {
            temp = f(ind-i,v,dp,k)+ abs(v[ind]-v[ind-i]);
        }
        minsub = min(minsub,temp);
    }
    cout<<minsub<<" . "<<ind<<endl;
    dp[ind] = minsub;
    return minsub;

}

frog(int n,vector<int> &v,int k)
{
    vector<int> dp(n,-1);
    return f(n-1,v,dp,k);
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<frog(n,v,k)<<endl;
    return 0;
}