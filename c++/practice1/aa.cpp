#include<iostream>
using namespace std;

int main(){
 
  int A[5]={3,4,5,6,7};
  for (int i = 0; i < 5; i++)
  {
   cout<<A[i]<<endl;
  }
  cout<<sizeof(A);
  
  return 0;
}