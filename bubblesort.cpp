#include <iostream>

using namespace std;

int main(){
    int arr[] = {1,2,8,4,5,0,12,6,23,65,56,65,30,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    int counter = 1;
    while(counter<n){
    
        for(int i = 0 ; i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
              int temp = arr[i];
              arr[i] = arr[i+1];
              arr[i+1] = temp;
            }
        }
        counter++;
    }

    for(int j = 0; j<n; j++)
    {
        cout<<arr[j]<<" ";
    }
    
    return 0;
}