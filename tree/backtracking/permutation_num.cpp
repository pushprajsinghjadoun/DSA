#include <bits/stdc++.h>
using namespace std;

void per(vector<vector<int>> &res, vector<int> &v,int n,vector<int> arr,int l)
{
    if(n==arr.size())
    {
        res.push_back(arr);
        return;
    }
    for(int i=n;i<arr.size();i++)
    {
        swap(arr[i],arr[n]);
        per(res,v,n+1,arr,l);
        swap(arr[i],arr[n]);
    }
    
    return;


}

int main()
{
    vector<int> arr ={1,2,3};
    vector<vector<int>> res;
    vector<int> v;
    int n=0;
    int l = arr.size();
    per(res,v,n,arr,l);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}