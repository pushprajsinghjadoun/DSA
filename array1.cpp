#include <iostream>

using namespace std;

int reverse(int arr[], int n){
  for(int i = n-1; i>0;i--){
      cout<<arr[i]<<" ";
  }
  
  return 1;
}



int main(){
  int arr[] = {1,2,8,4,100,0,7,6};
  int n = sizeof(arr)/sizeof(arr[0]);
   cout<<"Max value is "<<reverse(arr,n)<<"\n";
   
  return 0;
}