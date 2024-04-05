//Create a function to check if a All row in a 2D array is sorted in ascending order
#include<bits/stdc++.h>
using namespace std;

bool is_vector_sorted(vector<int>v){
    for(int i=0;i<v.size();i++){
        if(v[i-1]>v[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>arr(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        vector<int>v;
        for(int j=0;j<n;j++){
            v.push_back(arr[i][j]);
        }
    
    bool isSorted=is_vector_sorted(v);
    if(isSorted==true){
        cout<<"sorted "<<i+1<<endl;
    }
    else{
        cout<<"not sorted "<<i+1<<endl;
    }
  }
    return 0;
}