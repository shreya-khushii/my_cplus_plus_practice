#include<bits/stdc++.h>
using namespace std;
#define n 3 
#define m 3 

void printArray(int arr[][m]){
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){

    
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    printArray(arr);
    return 0;
}