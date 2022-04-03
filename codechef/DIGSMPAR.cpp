#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int long long n;
        cin>>n;
        int m = n;
        int sum =0;
        bool a1= false,a2 = false;
        while(n>0)
        {
            int r = n%10;
            sum+=r;
            n = n/10;
        }
        if(sum%2==0)
        {
            a1=true;
        }else
        {
            a2 = true;
        }
        n = m+1;
        sum =0;
        while(n>0)
        {
            int r = n%10;
            sum+=r;
            n = n/10;
        }
        if(sum%2==0)
        {
            a1=true;
        }else
        {
            a2 = true;
        }
        if(a1&&a2)
        {
            cout<<m+1<<endl;
        }
        else{
            cout<<m+2<<endl;
        }
    }
	return 0;
}
