#include <iostream>
using namespace std;


int main()
{
    int array[] = {12,45,23,51,19,8};
    
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(array[i]>array[j])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    for(int i =0;i<6;i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}