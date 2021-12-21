#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int check=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                check++;
                break;
            }
        }
        if(check==0 &&i!=1)
        {
            cout<<i<<endl;
        }
        check=0;
    }
    return 0;
}