#include <iostream>
using namespace std;

int main()
{
    int array[] = {12,45,23,51,19,8};

    for(int i =1;i<6;i++)
    {
        int current = array[i];
        int j = i-1;
        while(array[j]> current)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1]  = current;
    }

    for(int i=0;i<6;i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}

