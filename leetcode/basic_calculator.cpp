#include <bits/stdc++.h>
using namespace std;

bool o = false;


int cal(string s)
{
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        
        if(s[i]=='+' || s[i]=='-')
        {
            o = true;
        }
    }
    if(o){
            char f = '+';
            for(int i =0;i<s.size();i++)
            {
                if(s[i]!='(' && s[i]!=')')
                {
                    if(s[i]=='+')
                    {
                        f='+';
                    }else if(s[i]=='-')
                    {
                        f='-';
                    }
                    if(s[i]!='+' && s[i]!='-')
                    {
                        if(f=='+')
                        {
                            int temp = (int)s[i]-48;
                            sum+=temp;
                        }else if(f=='-')
                        {
                            int temp = (int)s[i]-48;
                            sum-=temp;
                             cout<<"-"<<temp<<" "<<sum;
                        }
                    }
                }
            }
        }else if(o==false){
            
            stringstream pu(s);
            pu>>sum;
            
        }
    return sum;

}

int main()
{
    string s;
    cin>>s;
    cout<<cal(s);
    return 0;
}

