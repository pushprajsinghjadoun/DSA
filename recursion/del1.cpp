#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int a=0,b=0,c=0;
        if(m>=n/2)
        {
            for(int i=n-1;i>=n-m;i--)
            {
                a+=v[i];
            }
            for(int i=0;i<n-m;i++)
            {
                b+=v[i];
            }
            cout<<abs(a-b)<<endl;
        }else
        {
            for(int i=0;i<m;i++)
            {
                a+=v[i];
            }
            for(int i=m;i<n;i++)
            {
                b+=v[i];
            }
            cout<<abs(b-a)<<endl;
        }
    }
    
    return 0;
}