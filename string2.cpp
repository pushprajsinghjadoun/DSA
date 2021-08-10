#include <iostream>

using namespace std;

int main()
{
    string str = "pushpraj singh hddd dgfg jfgf fhjf jadoun";
    int i =0;
    int j= 0;
    int word = 0;
    while (str[i]!='\0')
    {
       
       i++;
    }
    for(j; j<=i;j++)
    {
        if(str[j]==' ')
        {
            word++;
        }
    }
    
    cout<<word+1;
    
    return 0;
}