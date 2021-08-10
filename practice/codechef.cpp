#include <bits/stdc++.h>
using namespace std; 
#define ll long long

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
    int total;
    cin>>total;
    int arr[total];
    for(int j=0;j<total;j++)
    {
        string n;
    cin>>n;
    string h = n;
    for(int i=(n.length()-2);i>=0;i--)
    {
        h+= n[i];
        
    }
    
    stringstream geek(h);
 
    int x = 0;
    geek >> x;
    cout<<x<<" ";
    arr[j] = x;
 
   
    }
   
}