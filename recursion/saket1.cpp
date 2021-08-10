#include <iostream>
using namespace std;

int totoalpaths = 0;
void mazepaths(int i, int j, int n,int m, string osf)
{
    if(i==n-1 and j==m-1)
    {
        totoalpaths +=1;
        cout<<osf<<endl;
        return;
    }
    if(i>=n or j>=m)
    {
        return;
    }
    mazepaths(i,j+1,n,m,osf+ "R");
    mazepaths(i+1,j,n,m,osf + "D");
    mazepaths(i+1,j+1,n,m,osf + "|");
}

void linera(int n,int i,string osf)
{
    if(i>=n)
    {
        
        return;
    }
    if(i==n-1)
    {
        cout<<osf<<endl;
        return;
    }
    for(int j=1;j<=6;j++)
    {
        linera(n,i+j , osf + to_string(j) );
    }
}

void permutation(string str, string perm)
{
    if(str.size()==0)
    {
        cout<<perm<<endl;
        return;
    }
    for(int i=0;i<str.size();i++)
    {
        char ch = str[i];
        string ros = str.substr(0,i) + str.substr(i+1);
        permutation(ros,perm + ch);
    }
}
int main()
{
    // mazepaths(0,0,3,3,"");
    //linera(7,0,"");
    permutation("ABCD","");
    return 0;
}