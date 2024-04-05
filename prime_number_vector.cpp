//Create a C++ program that displays the prime numbers within a given range using nested for loops
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


vector<int>primeRange(int start,int end){
    vector<int>arr;
    for(int i=start;i<=end;i++){
        bool checkPrime=numPrime(i);
        if(checkPrime==true){
                arr.push_back(i);
        }
    }
    return arr;
}

int main(){
    int start,end;
    cin>>start>>end;
    vector<int>ans=primeRange(start,end);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
