//Create a function to check if a given row in a 2D array is sorted in ascending order
#include<bits/stdc++.h>
using namespace std;

bool  is_matrix_sorted(vector<int> v){
    for(int i=1;i<v.size();i++){
        if(v[i-1]>v[i]){
            return false;
        }
    }
  return true;
}

int main(){
    int n,m,row;
    cin>>n>>m>>row;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vector<int> v;
    for(int i=0;i<n;i++){
        if(i==row-1){
    for(int j=0;j<m;j++){
        v.push_back(a[i][j]);
   }
 }
}
   bool isSorted=is_matrix_sorted(v);
   if(isSorted==true){
       cout<<"matrix is sorted"<<endl;
   }
   else{
       cout<<"matrix is not sorted"<<endl;
   }
    return 0;       
  }