#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arrn[n];
    int arrm[m];
    for(int i=0; i<n;i++)
    {
        cin>>arrn[i];
    }
    for(int j = 0; j<m;j++)
    {
        cin>>arrm[j];
    }
    for(int k=0; k<m;k++)
    {
        int a = arrm[k];
        int b = arrn[0];
        if(b==2 && !(a==1))
        {
            cout<<-1<<endl;
        }
        else if(a==b)
        {
            cout<<0<<endl;
        }
        else if(b==0)
        {
            cout<<-1;

        }
        else if(b==1)
        {
            int r = n-a;
            cout<<n<<" "<<a<<" "<<r<<endl;
        }
    }
    
    
    return  0;
}