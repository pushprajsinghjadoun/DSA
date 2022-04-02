#include <bits/stdc++.h>

using namespace std;

int solveUtil(int ind, vector<int>& arr, vector<int>& dp){
    
    
    if(ind==0) return arr[ind];
    if(ind<0)  return 0;
    if(dp[ind]!=-1) return dp[ind];
    
    int pick= arr[ind]+ solveUtil(ind-2, arr,dp);
    int nonPick = 0 + solveUtil(ind-1, arr, dp);
    dp[ind] =max(pick, nonPick);
    return max(pick, nonPick);
}

int solve(int n, vector<int>& arr){
    vector<int> dp(n,-1);
    return solveUtil(n-1, arr, dp);
}


int main() {

  vector<int> arr{1,2,3,5,4};
  int n=arr.size();
  cout<<solve(n,arr);

}