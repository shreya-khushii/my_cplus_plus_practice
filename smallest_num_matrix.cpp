//Create a program to find the largest element /smallest in a 2D array.
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
    int smallestelement=arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]<smallestelement){
                smallestelement=arr[i][j];
            }
        }
    }
    cout<<"smallestelement"<<smallestelement<<endl;
    return 0;
}