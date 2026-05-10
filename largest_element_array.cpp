// To print the largest element in an array
// Dynamic memory allocation usiing new operator
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int *arr = new int[n];
  int i;
  for(i=0;i<n;i++){
    cout<<"Enter the element: ";
    cin>>arr[i];
  }
  cout<<endl<<"Following was the given array: "<<endl;
  for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  int max = arr[0];
  for(i=0;i<n;i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  cout<<endl<<"The largest element in the given array is: "<<max;
  delete[] arr;   // Free the dynamic allocated memory
  return 0;  
}
