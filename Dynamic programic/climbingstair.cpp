#include <bits/stdc++.h>
using namespace std;

int climb(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n<0)
    {
        return 0;
    }
    
    int s = climb(n-1) + climb(n-2) + climb(n-3);
    
    return s;

}
int climbdy(int n)
{
    vector<int> a(n+1);
    a[0]=1;
    a[1] = 1;
    a[2] = 2;

    for(int i=3;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    return a[n];
}

int main()
{
    int arr[11];
    for(auto i:arr)
    {
        i = 0;
    }
    cout<<climbdy(5);

    return 0;
}