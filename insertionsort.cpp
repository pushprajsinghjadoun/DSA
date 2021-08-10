#include <iostream>

using namespace std;

int main(){
    int arr[] = {9,5,8,7,4,6,3,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 1; i<n; i++ )
    {
        int value = arr[i];
        int j = i-1;

        while (arr[j]>value && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = value;
        
    }

    for(int k = 0; k<n;k++)
    {
        cout<<arr[k]<<" ";
    }

    return 0;
}