#include<bits/stdc++.h>
using namespace std;


bool checkExists(vector<int>ans, int element){
    bool flag = false;
    for(int i=0;i<ans.size();i++){
        if(ans[i]==element){
            flag =true;
            break;
        }
    }
    return flag;
}

vector<int>returnDuplicate(vector<int>arr, int n){
    vector<int>ans;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                bool alreadyExists = checkExists(ans, arr[i]);
                if(alreadyExists == false){
                    ans.push_back(arr[i]);
                }
            }
        }
 
    }
    return ans;
}




int main(){
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int>ans = returnDuplicate(arr, n);
    
    sort(ans.begin(), ans.end());
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
  
    return 0;
}

