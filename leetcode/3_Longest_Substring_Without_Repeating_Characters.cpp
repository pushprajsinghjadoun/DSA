#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    unordered_map<char,int> m;
    if(s.size() == 0 || s.size()==1)
    {
        return s.size();
    }
    m.insert({s[0],1});
    int maxx = 0;
    for(int i=1;i<s.length();i++)
    {
        if(m.find(s[i])!=m.end())
        {
            int r = m.size();

            maxx = max(r,maxx);
            m.clear();
           
        }
        m.insert({s[i],1});
        int k = m.size();
        maxx = max(k,maxx);
        

    }
     return maxx;
}

int main()
{
    string s;
    cin>>s;
    cout<<lengthOfLongestSubstring(s);
}