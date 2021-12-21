#include <bits/stdc++.h>
using namespace std;

string shiftingLetters(string s, vector<int>& shifts)
{
        int sum = 0;
    string re = "";
    vector<int> su;
    int n = shifts.size();
    for(int i = shifts.size()-1;i>=0;i--)
    {
        if(shifts[i]>=26)
        {
            sum+=shifts[i]%26;
        }else
        {
            sum+=shifts[i];
        }
        
        su.push_back(sum);
    }
    reverse(su.begin(), su.end());
    for(int i=0;i<n;i++)
    {
        int v = s[i]-0;
        int g = (v+su[i]);
        
        if(g>122)
        {
           int temp = g-96;
            g = temp%26;
            g+=96;
        }
        if(g==96)
        {
            g+=26;
        }
       
       char c = tolower((g));
        re+=c;
    }
    return re;
}

int main()
{
    string s = "qoqpvw";
    vector<int> shift = {95,7,67,21,33,23};
    cout<<shiftingLetters(s,shift);
    return 0;
}