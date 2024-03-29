#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>>arr){
     int n = arr.size();
     int m = arr[0].size();
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main() {
 
   vector<vector<int>>arr = {
       {1,2,3},
       {4,5,6},
       {7,8,9}
   }; 
   printMatrix(arr);
    return 0;
}
