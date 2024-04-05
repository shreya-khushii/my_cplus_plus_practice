//Develop a program to perform matrix addition/substraction of two 2D arrays.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,m1;
    cin>>n1>>m1;
    int a[n1][m1];
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>a[i][j];
        }
    }
    int n2,m2;
    cin>>n2>>m2;
    int b[n2][m2];
    for(int i=0;i<n2;i++){
        for(int j=0;j<m2;j++){
            cin>>b[i][j];
        }
    }
    if(n1==n2 && m1==m2){
        int arr[n1][m1];
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                arr[i][j]=a[i][j]-b[i][j];
                cout<<arr[i][j]<<" ";
            }
        cout<<endl;
        }
    }
    else{
        cout<<"sub is not possible";
    }
    return 0;
}