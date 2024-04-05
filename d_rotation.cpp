//Program for array left rotation by d positions.
#include<bits/stdc++.h>
using namespace std;
vector<int>rotate(int n,vector<int>arr,int ind){
    vector<int>v;
    for(int i=ind;i<n;i++){
        v.push_back(arr[i]);
    }
    for(int i=0;i<ind;i++){
        v.push_back(arr[i]);
    }
  return v;
}




int main(){
    int n,ind;
    cin>>n>>ind;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result=rotate(n,arr,ind);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}