//Count the number of zeros and ones in an array.
#include<bits/stdc++.h>
using namespace std;

vector<int>checkNum(vector<int>arr,int n){
    int zero=0;
    int one=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero=zero+1;
        }
        if(arr[i]==1){
            one=one+1;
        }
    }
    vector<int>v;
        v.push_back(zero);
        v.push_back(one);
    return v;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=checkNum(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<"number of time" <<i<<" "<<ans[i]<<endl;
    }
    
    return 0;
}