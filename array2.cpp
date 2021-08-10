#include <iostream>

using namespace std;

int sort(int arr[], int n){
    int q = arr[0];
    for(int i = 0 ; i<n-1; i++){
     for(int j= i+1; j<n; j++){
         if(arr[j]<arr[i]){
             int temp = arr[j];
             arr[j] = arr[i];
             arr[i] = temp;
         }
     }

    }
    for(int k =0; k<n;k++){
        cout<<arr[k]<<"\n";
    }
    return 0;
}

int main(){
    int arr[] = {1,2,8,4,5,0,12,6,23,65,56,65,30,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<sort(arr,n);

    return 0;
}