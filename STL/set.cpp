#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int, greater<int> > s1;
 
    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
     
    // only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);
    auto it = s1.find(60);
    if(it!=s1.end())
    {
        s1.erase(it);
    }
    for(auto i:s1)
    {
        cout<<i<<" ";
    }
    return 0;
}