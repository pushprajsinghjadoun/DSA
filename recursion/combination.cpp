#include <bits/stdc++.h>
using namespace std;

void printKLengthString(char set[], string sequence, int n, int k)
{
    if(k==0)
    {
        cout<<sequence<<" ";
        return;
    }
    for(int i=0;i<n;i++)
    {
        string newstring;
        newstring = sequence + set[i];
        printKLengthString(set,newstring,n,k-1);
    }
}

int main()
{
    
   char set[] = {'1', '2','3','4','5'};
   int n = 5;
   int k = 3;
   printKLengthString(set, "", n, k);
    return 0;
}