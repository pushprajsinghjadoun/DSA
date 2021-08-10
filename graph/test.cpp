#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> g;
    g.insert(make_pair(1,3));
    g.insert(make_pair(1,2));
    g.insert(make_pair(1,1));
    g.insert(make_pair(1,0));
    g.insert(make_pair(2,3));
    map<int, int>::iterator itr;
    for (itr = g.begin(); itr != g.end(); ++itr) {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    return 0;
}