//Implement a function to calculate the average of all elements in a 2D array.
#include<bits//stdc++.h>
using namespace std;
int main(){
    int avg=0;
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
      int length=n*m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
      }
    }
    cout<<sum<<endl;
    avg=sum/length;
    cout<<"avg:"<<avg<<endl;
return 0;
}
