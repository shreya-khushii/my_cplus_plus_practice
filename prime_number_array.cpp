//u r given an array check how many numbers are prime number return vector
#include<bits/stdc++.h>
using namespace std;

bool numPrime(int element){
    if(element<=1){
        return false;
    }
    for(int i=2;i<element;i++){
        if(element%i==0){
            return false;
        }
    }
    return true;
}


vector<int>primeArr(vector<int>arr,int n){
    vector<int>ans;
    for(int i=0;i<n;i++){
        bool checkPrime=numPrime(arr[i]);
        if(checkPrime==true){
                ans.push_back(arr[i]);
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
    
    vector<int>ans=primeArr(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

