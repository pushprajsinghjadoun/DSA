#include <iostream>
using namespace std;

int main()
{
    int array[] = {12,45,23,51,19,8};

    for(int j = 0;j<6;j++)
    {
        for(int i =0;i<6-j;i++)
    {
        if(array[i]>array[i+1])
        {
            int temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
        }
    }
    }
    for(int i=0;i<6;i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}

// Reapetedly swap two adjacent element if they are in wrong order
