#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(101,0);
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            v[temp]++;
        }
        int total = n;
        for(int i=0;i<101;i++)
        {
            if(v[i]%2) total++;
        }
        if((total/2)%2) total+=2;
        cout<<total-n<<endl;
        
    }
    
	return 0;
}
