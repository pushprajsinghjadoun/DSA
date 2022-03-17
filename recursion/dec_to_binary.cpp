#include <bits/stdc++.h>
using namespace std;

int b(int n,int res)
{
    if(n<=0)
    {
        return res;
    }
    int a = n%2;
    n = n/2;
    res = res*10 + a;
    return b(n,res);



}

int main()
{
    int n;
    cin>>n;
    int res=0;
    cout<<b(n,res);
    return 0;
}