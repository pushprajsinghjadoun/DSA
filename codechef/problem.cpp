#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int even = 0;
        int ma = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                even++;
            }else
            {
                ma = max(ma,even);
                even=0;
            }
            
        }
        ma = max(even,ma);
        cout<<ma<<endl;
    }
    
    return 0;
}