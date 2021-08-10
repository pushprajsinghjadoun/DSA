#include <bits/stdc++.h>
using namespace std;

int result = 0;
int reverse(int x)
{
    if(x>0 and x<10)
    {
        return x;
    }
    cout<<result<<endl;
    result = 10*result + x%10;
    x/10;
    
    return  result;
}
int main()
{
    int n;
    cin>>n;
    cout<<reverse(n);
    return 0; 
}