//Create a function to check if all row in a 2D array is sorted in ascending order
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
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        vector<int> v;
     for(int j=0;j<m;j++){
        v.push_back(a[i][j]);
   }
   
   bool isSorted=is_matrix_sorted(v);
   if(isSorted==true){
       cout<<"matrix is sorted "<<i+1<<endl;
   }
   else{
       cout<<"matrix is not sorted "<<i+1<<endl;
   }
   
 }
    return 0;       
  }