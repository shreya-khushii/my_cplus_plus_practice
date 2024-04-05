//Create a function to check if a given 2D array is symmetric or not.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    int b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          b[i][j]=a[j][i];
        }
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(a[i][j]!=b[i][j]){
             cout<<"not symmetric"<<endl;
             flag=true;
             break;
             }
        }
        if(flag==true){
            break;
        }
    
    }
    if(flag==false){
        cout<<"symmetric"<<endl;
    }
    return 0;
}