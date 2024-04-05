//Develop a program to perform matrix multiplication of two 2D arrays.
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>multi(vector<vector<int>>a, vector<vector<int>>b, int n ,int m){
    vector<vector<int>>mat(n, vector<int>(m)) ;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        int sum=0;
        for(int k=0;k<n;k++){
            sum=sum+a[i][k]*b[k][j];
        }
        mat[i][j]=sum;
      }
    }
    return mat;
}


int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n, vector<int>(m));
    vector<vector<int>>b(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    vector<vector<int>>ans=multi(a,b,n,m);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
              cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}