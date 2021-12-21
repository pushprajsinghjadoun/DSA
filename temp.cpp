#include <bits/stdc++.h>
using namespace std;


int countStudents(vector<int>& students, vector<int>& sandwiches) 
{
    queue<int> q;
    stack<int> s;
    int n = students.size();
    int result = 0;
    int c=0;
    for(auto i: students)
    {
        q.push(i);
    }
    for(int i= sandwiches.size()-1;i>=0;i--)
    {
        cout<<i<<" ";
    }
    
    result = n-c;
    return result;
}

int main()
{
    vector<int> arr1 = {1,1,0,0};
    vector<int> arr2 = {0,1,0,1};

    cout<<countStudents(arr1,arr2);

    return 0;
}