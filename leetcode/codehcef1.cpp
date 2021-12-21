#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        unordered_map<int,int> m;
        unordered_map<int,int> visit;

        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            m[temp]++;
            visit[temp] = 1;
        }
        if(n==1)
        {
            cout<<1<<" "<<0<<endl;
            continue;
        }
        int result =0;
        int c =0;
        for(auto itr : m)
        {
            if(itr.second == n)
            {
                result = n;
                break;
            }
            if(itr.second>=result)
            {
                result = itr.second;
            }
        }
        if(x==0)
        {
            cout<<result<<" "<<c<<endl;
            continue;
        }
        for(auto itr: m)
        {
            if(visit[(itr.first)^x]==1)
            {
                if(itr.second + m[(itr.first)^x]>result)
                {
                    result= itr.second + m[(itr.first)^x];
                    c = min(itr.second,m[(itr.first)^x]);
                }
                else if(itr.second + m[(itr.first)^x]==result){
                    if(min(itr.second, m[(itr.first)^x])<c)
                    {
                        c = min(itr.second,m[(itr.first)^x]);
                    }

                }
            }
        }
        cout<<result<<" "<<c<<endl;
    }
    
    return 0;
}