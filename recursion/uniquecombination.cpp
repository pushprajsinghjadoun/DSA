#include <bits/stdc++.h>
using namespace std;

void  uniquecombination(int a[],int data[],int start,int end,int index,int r)
{
    if(index==r)
    {
        for(int j=0;j<r;j++)
        {
            cout<<data[j]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=start;i<=end &&end+1-i>=r-index;i++)
    {
        data[index]= a[i];
        uniquecombination(a,data,i+1,end,index+1,r);
    }
}

int main()
{
    
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  int m;
  cin>>m;
  int data[m];
  uniquecombination(a,data,0,n-1,0,m);
    return 0;
}