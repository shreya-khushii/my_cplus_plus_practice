//Find the sum of different diagonals in the matrix.
#include<bits/stdc++.h>
using namespace std;
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
      int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
             sum=sum+arr[i][j];
        }
    }
 }
  int sum2=0;
     for(int i=0;i<n;i++){
         sum2=sum2+arr[i][m-i-1];
    }
    cout<<sum<<endl;
    cout<<sum2<<endl;
    cout<<sum+sum2<<endl;
return 0;
}