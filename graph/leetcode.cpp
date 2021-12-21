#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int r = nums[i]+nums[j];
               if(r==target)
               {
                   res.push_back(i);
                   res.push_back(j);
                   break;
               }
            }
        }
        return res;
    }

int main()
{
    vector<int> gg= {3,2,4};
    vector<int> re = twoSum(gg,6);
    for(auto i: re)
    {
        cout<<i<<" ";
    }

    return 0;
}