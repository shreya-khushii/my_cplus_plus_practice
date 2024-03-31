#include<bits/stdc++.h>
using namespace std;

bool checkDuplicate(vector<int>arr, int n){
    bool flag =false;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
        if(flag ==true){
            break;
        }
    }
    return flag;
}




int main(){
    int n;
    cin>>n;
    
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    bool isDuplicate = checkDuplicate(arr, n);
    
    if(isDuplicate== true){
        cout<<"Array has duplicate element"<<endl;
    }
    else{
        cout<<"Array do not have duplicate element"<<endl;
    }
  
    return 0;
}

