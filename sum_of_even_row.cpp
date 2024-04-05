//Find the sum of all the element in matrix of 3*3 where the row index is even.
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
        if(i%2==0){
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
      }
    }
    cout<<sum<<endl;
return 0;
}

