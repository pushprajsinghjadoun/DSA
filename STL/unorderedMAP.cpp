#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, int> umap;
 
    // inserting values by using [] operator
    // umap["GeeksforGeeks"] = 10;
    // umap["Practice"] = 20;
    // umap["Contribute"] = 30;
    umap.insert(make_pair("gg",1.5));
    umap.insert(make_pair("g",1.5));
    umap.insert(make_pair("lg",1.5));
    umap.insert(make_pair("kh",1.5));

 
    // Traversing an unordered map
    for (auto x : umap)
       
      cout << x.first << " " << x.second << endl;
      
    return 0;
}