#include <iostream>

using namespace std;

void sort(int arr[], int n){
    int q = arr[0];
    int k=0;
    for(int i = 0 ; i<n-1; i++){
     for(int j= i+1; j<n; j++){
         if(arr[j]<arr[i]){
             int temp = arr[j];
             arr[j] = arr[i];
             arr[i] = temp;
         }
     }

    }
    
    
}

int main(){
    // int arr[] = {1,2,8,4,5,0,12,6,23,65,56,65,30,100};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n;
    cin>>n;
    int arr[n];
    for(int g = 0; g<n;g++)
    {
        cin>>arr[g];
    }
    
    sort(arr,n);
    for(int h =0 ; h<n;h++)
    {
        if(arr[h]%7==0)
        {
            cout<<h;
            break;
        }
    }
    

    return 0;
}