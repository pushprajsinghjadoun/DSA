#include <bits/stdc++.h>
using namespace std;


int k =0;
bool issafe(int i,int j,int n,vector<vector<bool>> &visite)
{
    return i<n && j<n && i>=0 && j>=0 && visite[i][j]==false; 
}

void help(int i,int j,int n,vector<vector<int>> &v,vector<vector<bool>> &visite,int total)
{
    
    if(i==n-1 && j==n-1)
    {
        cout<<"|";
        k++;

        return;
    }
    if(not issafe(i,j,n,visite))
    {
        return;
    }
    visite[i][j]=true;
    if(i+1<n and v[i+1][j]==0 and visite[i+1][j]==false)
    {
        help(i+1,j,n,v,visite,total);
    }
    if(i-1>=0 and v[i-1][j]==0 and visite[i-1][j]==false)
    {
        help(i-1,j,n,v,visite,total);
    }
    if(j+1<n and v[i][j+1]==0 and visite[i][j+1]==false)
    {
        help(i,j+1,n,v,visite,total);
    }
    if(j-1>=0 and v[i][j-1]==0 and  visite[i][j-1]==false)
    {
        help(i,j-1,n,v,visite,total);
    }
    visite[i][j]=false;
}

int allpath(vector<vector<int>> &v)
{
    int n = v.size();
    int total = 0;
    vector<vector<bool>> visite(n,vector<bool>(n,false));
    int i=0,j=0;
    help(i,j,n,v,visite,total);
    return k;
}

int main()
{
    vector<vector<int>> v= {{0,1,0},{0,0,0},{0,0,0}};
    cout<<allpath(v)<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}