// Dynamic Memory Allocation using calloc() and resizing memory using realloc()
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
  int *arr = (int*) calloc(5,sizeof(int));
  if(arr==NULL){
    cout<<"Memory Allocation Failed";
    return 1;
  }
  cout<<"Enter any 5 elements: "<<endl;
  int i;
  for(i=0;i<5;i++){
    cout<<"Enter element "<<i+1<<": ";
    cin>>arr[i];
  }
  cout<<endl<<"Following is the array of 5 elements: "<<endl;
  for(i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
arr = (int*) realloc (arr,6*sizeof(int));    // preserves existing memory
cout<<endl<<"After Reallocation: "<<endl;
cout<<"Enter the 6th element: ";
cin>>arr[5];
cout<<endl<<"Following is the array of 6 elements: "<<endl;
for(i=0;i<6;i++){
  cout<<arr[i]<<" ";
}
}
