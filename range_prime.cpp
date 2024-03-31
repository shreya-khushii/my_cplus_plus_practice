#include<bits/stdc++.h>
using namespace std;

bool isPrime(int number){
    if(number<=1){
        return false;
    }
    for(int i=2;i<number;i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}



vector<int>allPrime(int start, int end){
    
    vector<int>ans;
    
    for(int i=start;i<=end;i++){
        bool prime = isPrime(i);
        
        if(prime == true){
            ans.push_back(i);
        }
    }
    
    return ans;
     
}
int main(){
    int start, end;
    cin>>start>>end;
    
    vector<int>ans = allPrime(start, end);
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

