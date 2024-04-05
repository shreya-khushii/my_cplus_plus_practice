//Develop a program to rotate a given matrix (2D array) 90 degrees clockwise
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
    int c[n][m];
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             c[i][j]=b[i][m-1-j];
         }
     }
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             cout<<c[i][j]<<" ";
         }
         cout<<endl;
     }
    return 0;
   
}