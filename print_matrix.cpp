#include<bits/stdc++.h>
using namespace std;
// u have been given row and columns value , and u need to take input of n*m matrix and print this, n=2,m=2

// 1 2 
// 3 4

int main(){

  int n,m;
  cin>>n>>m;
  
  int arr[n][m];
  
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cin>>arr[i][j];
      }
  }
  
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
          cout<<arr[i][j]<<" ";
      }
      cout<<endl;
  }
  
  
  
 return 0;
}


// i =0;- > j=0 -> a[0][0] =1
//          j=1 -> a[0][1] = 2

// i =1 -> j=0 ->  a[1][0] = 3
//         j=1  -> a[1][1] = 4
        
         