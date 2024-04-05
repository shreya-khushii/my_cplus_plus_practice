//Write a code to subtract 1 in all the element of the array that has the odd index;
#include<bits//stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int number;
  cin>>number;
  int count=0;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  for(int i=0;i<n;i++){
      if(arr[i]==number){
          count=count+1;
      }
  }
  cout<<count<<endl;
  
  return 0;
}
