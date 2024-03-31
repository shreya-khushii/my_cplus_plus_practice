#include<bits/stdc++.h>
using namespace std;

vector<int>returnMaxCount(vector<int>arr, int n){
    int maxCount =0;
    int maxNum =0;
    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
               count++;
            }
        }
        
        if(count>maxCount){
            maxCount = count;
            maxNum = arr[i];
        }
 
    }
    
    vector<int>ans;
    ans.push_back(maxCount);
    ans.push_back(maxNum);
    
    return ans;
}




int main(){
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int>ans = returnMaxCount(arr, n);
    
    cout<<"Max Num is: "<<ans[1]<<" "<<",And its count is: "<<ans[1]<<endl;
    
    return 0;
}

