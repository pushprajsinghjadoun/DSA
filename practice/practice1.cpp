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
int cefero(int n, int k)
{
    int diff = k-n;
    int sum =0;
    for(int j = 1;j<=diff;j++)
    {
        int f = n+j;
        ostringstream str1;
        str1 << f;
        string l = str1.str();
        string h = l;
    for(int i=(l.length()-2);i>=0;i--)
    {
        h+= l[i];
        
    }
    
    stringstream geek(h);
 
    int x = 0;
    geek >> x;
    sum = sum + x;
        

    }
    return sum;
    

}
int main()
{
    int total;
    cin>>total;
    for(int j=0;j<total;j++)
    {
        int n; int k;
        cin>>n>>k;
        int v = cefero(n,k);
        cout<<getpower(n,v)<<endl;
    }
    return 0;
}