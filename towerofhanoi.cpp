#include  <iostream>
using namespace std;

void recursive(int n, char src, char dest, char helper)
{
    if(n==0)
    {
        return;
    }
    recursive(n-1,src,helper,dest);
    cout<<src<<"move " <<src<<" "<<dest<<endl;
    recursive(n-1,helper,dest,src);
    
}

int main()
{
    recursive(3,'A','C','B');
    return 0;
}