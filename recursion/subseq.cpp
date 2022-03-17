#include <bits/stdc++.h>
using namespace std;

int subseq(string str,string output[])
{
    if(str.length()==0)
    {
        output[0]="";
        return 1;
    }

    int smaller = subseq(str.substr(1),output);
    for(int i =0;i<smaller;i++)
    {
        output[i+smaller]= str[0]+ output[i];
    }
    return 2*smaller;
}

int main()
{
    string output[1000];
    int outputsize = subseq("abc",output);
    for(int i=0;i<outputsize;i++)
    {
        cout<<output[i]<<endl;
    }

    return 0;
}