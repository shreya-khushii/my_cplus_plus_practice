//Find the sum of all the element in matrix of 2*2 where the column index is odd.
#include<bits//stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int sum=0;
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
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j%2==1){
            sum=sum+arr[i][j];
        }
      }
    }
    cout<<sum<<endl;
return 0;
}