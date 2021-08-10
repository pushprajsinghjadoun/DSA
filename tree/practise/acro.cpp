#include <bits/stdc++.h>
using namespace std;

bool is(int r[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(r[i]==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
 int t;
 cin>>t;
 while (t--)
 {
      int n;
  cin>>n;
  int a[n]; //main array
  int r[n]; // second array
  for(int i=0;i<n;i++)
  {
      r[i]=1; // sab index ke value 0 rahai ge
  }
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  int counter=1;
  while (counter<n)
  {
      for(int i=0;i<n-counter;i++)
      {
          if(a[i]>a[i+1])
          {
              int temp = a[i]; // yaha value sort ho rahai hai main array ke
              a[i] = a[i+1];
              a[i+1] = temp;
              
          }
      }
      counter++;
  }
 
  for(int i=0;i<n;i++)
  {
      cout<<a[i];
  }
 }
 
  
  
    return 0;
}



