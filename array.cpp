#include <iostream>

using namespace std;

int max(int arr[], int n){
  int max = 0 , min =0 ;
  for(int i = 0; i<=n;i++){
       if(arr[i]>max)
       max = arr[i];
      
  }
  return max;
}
int min(int arr[], int n){
  int max = 0 , min =0 ;
  for(int i = 0; i<=n;i++){
       if(arr[i]<max)
       max = arr[i];
      
  }
  return max;
}

int main(){
  int arr[] = {1,2,8,4,100,0,7,6};
  int n = sizeof(arr)/sizeof(arr[0]);
   cout<<"Max value is "<<max(arr,n)<<"\n";
   cout<<"Min value is "<<min(arr,n);
  return 0;
}