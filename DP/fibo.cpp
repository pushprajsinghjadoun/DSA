#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n+1);
    arr[0] =0;
    arr[1] =1;
    for(int i=2;i<arr.size();i++)
    {
        if(arr[i]==0)
        {
            arr[i] = arr[i-1] + arr[i-2];
        }
    }
    for(int i =1;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}