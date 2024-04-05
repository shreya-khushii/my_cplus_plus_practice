//Write a code to add 1 in all the element of the array that has the even index;
#include<bits//stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  for(int i=0;i<n;i++){
      if(i%2==0){
          arr[i]=arr[i]+1;
      }
  }
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
      
  }
  cout<<endl;
  return 0;
}

