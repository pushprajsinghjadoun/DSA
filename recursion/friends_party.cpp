#include <bits/stdc++.h>
using namespace std;

int friends(int n)
{
    if(n==1 or n==2) return n;

    return friends(n-1) + (n-1)*friends(n-2);
}

int main()
{
    cout<<friends(4);
    return 0;
}