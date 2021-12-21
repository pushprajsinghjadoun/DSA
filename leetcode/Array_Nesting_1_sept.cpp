#include <bits/stdc++.h>
using namespace std;

int helper(vector<int> & nums,int n,vector<int> &visit)
{
    
    if(visit[n]==1)
    {
        return 0;
    }
    if(nums[n]==0 and n<nums.size())
    {
        return 1;
    }
    visit[n]=1;
    return (helper(nums,nums[n],visit) +1);
}

int arrayNesting(vector<int>& nums)
{
    auto result = 0;
        for (const auto& num : nums) {
            if (num != numeric_limits<int>::max()) {
                auto start = num, count = 0;
                while (nums[start] != numeric_limits<int>::max()) {
                    auto temp = start;
                    start = nums[start];
                    nums[temp] = numeric_limits<int>::max();
                    ++count;
                }
                result = max(result, count);
            }
        }
        return result;
    
   
}

int main()
{
    vector<int> v = {5,4,0,3,1,6,2};
    cout<<arrayNesting(v);
    
    
    
    return 0;
}