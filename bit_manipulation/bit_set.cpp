#include <iostream>
using namespace std;

int main()
{
    // checking for Ith bit set  que 1;
//     int n,i;
//     cin>>n>>i;
//    int f = 1;
//     f = f<<i;                // f is swifted left by ith time
  
//     int res = n&f;     // now we execute AND operation

//     if(res==0)        // if res is zero then false else true
//     {
//         cout<<"FALSE"<<endl;
//     }else
//     {
//         cout<<"TRUE"<<endl;
//     }



// checking number of set bit in a number or in my word no. of 1's in binary representation

    int count=0;
    int n;
    cin>>n;

    while (n>0)
    {
        if(n&1>0) count++;

        n = n>>1;
    }

    cout<<count<<endl;
    
    return 0;
}