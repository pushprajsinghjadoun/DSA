#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    // if(n==0 || n==1)
    // {
    //     return n;
    // }
    // if(arr[n]!=0)
    // {
    //     return arr[n];
    // }

    // arr[n] =  fibo(n-1,arr) + fibo(n-2,arr);
    // return fibo(n-1,arr) + fibo(n-2,arr);
    int arr[n+2];
    arr[0]=0;
    arr[1] = 1;
   for(int i=2;i<=n;i++)
   {
       arr[i] = arr[i-1]+ arr[i-2];
   }
   return arr[n];
}

int main()
{
    int arr[4];
    
    cout<<fibo(4);
    return 0;
}