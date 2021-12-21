#include <bits/stdc++.h>
using namespace std;



int printInBase(int long long x, int long long y)
{
    int v=0;

while (x>=y)
{
    int long long rem = x%y;
    v+=rem;
    
    x = x/y;
}

v+=x;
return v;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int long long n,l,r;
   cin>>n>>l>>r;
   int long long num =9618384221,index;
   for(int i=l;i<=r;i++)
   {
       int temp = printInBase(n,i);
       cout<<temp<<"||"<<i<<endl;
       if(temp<num)
       {
           num = temp;
           index = i;
       }
   }
   cout<<index<<endl;
    }
    
    return 0;
}
