#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    int q;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }
   reverse(v.begin(), v.end());
   auto it = v.insert(v.begin(),3);
   v.insert(it,2);
   v.erase(v.begin()+1);
    for(auto i :v)
    {
        cout<<i;
    }
    
    return 0;
}