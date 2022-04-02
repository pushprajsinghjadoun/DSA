#include <bits/stdc++.h>
using namespace std;

int f(int ind,vector<int>&v,vector<int>&dp)
{
    if(ind==0)
    {
        return 0;
    }
    if(dp[ind]!=-1) return dp[ind];
    int left = f(ind-1,v,dp)+ abs(v[ind]-v[ind-1]);
    int right = INT_MAX;
    if(ind>1) f(ind-2,v,dp)+ abs(v[ind]-v[ind-2]);
    int minsub = min(left,right);
    cout<<minsub<<" . "<<ind<<endl;
    dp[ind] = minsub;
    return minsub;

}

frog(int n,vector<int> &v)
{
    vector<int> dp(n,-1);
    return f(n-1,v,dp);
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<frog(n,v)<<endl;
    return 0;
}