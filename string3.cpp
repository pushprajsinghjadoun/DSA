#include <iostream>

using namespace std;

int main()
{
    string alp = "pushpraaj@123";
    int i =0, alph = 0, dig=0, sp=0;

    while(alp[i]!='\0')
    {
        if((alp[i]>='a' && alp[i]<='z') || (alp[i]>='A' && alp[i]<='B') )
        {
            alph++;
        }
        else if(alp[i]>='0' && alp[i]<='9')
        {
            dig++;
        }
        else{
            sp++;
        }
        i++;
    }
    cout<<alph<<" "<<dig<<" "<<sp<<" "<<i;
    return 0;
}