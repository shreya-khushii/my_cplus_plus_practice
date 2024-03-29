#include <bits/stdc++.h>
using namespace std;
// when we have n and m given and we need to make the 2d vector of any size;

void printVector(vector<vector<int>>mat, int n ,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
   int n, m;
   cin>>n>>m;
   
   vector<vector<int>>mat;
   
   for(int i=0;i<n;i++){
       vector<int>v;
       for(int j=0;j<m;j++){
           int val;
           cin>>val;
           v.push_back(val);
       }
       
       mat.push_back(v);
   }
   
   printVector(mat, n, m);
    return 0;
}


