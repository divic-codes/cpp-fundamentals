// Dynamic Memory Allocation by using malloc() function.
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
int *p = (int*) malloc(5*sizeof(int));
if(p==NULL){
  cout<<"Memory Allocation Failed";
  return 1;
}
int i;
cout<<"Enter any 5 numbers: "<<endl;
for(i=0;i<5;i++){
  cout<<"Enter number "<<i+1<<": ";
  cin>>*(p+i);
}
cout<<endl<<"Following is the given 5 numbers: ";
for(i=0;i<5;i++){
  cout<<*(p+i)<<" ";
}
free(p);    // deallocating memory 
p=NULL;   // points to nothing
return 0;
}
