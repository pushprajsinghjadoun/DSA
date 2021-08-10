#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007;

ll getpower(ll base, ll power)
{
    ll res =1;
    while (power!=0)
    {
        if(power%2==0){
            base = ((base%1000000007)*(base%1000000007))%1000000007;
            power = floor(power/2);

        }else{
            res = ((res%1000000007)*(base%1000000007))%1000000007;
            power = power-1;
        }
    }
    return res;
    
}

int main()
{
    cout<<getpower(9,212);
    return 0;
}