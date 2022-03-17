#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        char arr[n];
        cin>>arr;
        bool m=false,o = false,m1 = false,d=false,a = false, d1=false,rr= false;
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='m' && m && o) m1 = true;
            if(arr[i]=='m') m = true;
            if(arr[i]=='o' && m) o = true;
            
            if(arr[i]=='d' && d && a) d1 = true;
            if(arr[i]=='d') d = true;
            if(arr[i]=='a'&& d) a = true;
            

            if(m and o and m1)
            {
                cout<<"Mom"<<endl;
                rr=true;
                break;
            }
            if(d and a and d1)
            {
                cout<<"Dad"<<endl;
                rr= true;
                break;
            }

        }
        if(!rr) cout<<"Goo-Goo"<<endl;

    }
    
    
    return 0;
}