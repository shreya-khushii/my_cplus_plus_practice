#include<bits/stdc++.h>
using namespace std;

bool isTragetPresent(int n, int target, int arr[]){
    bool isPresent = false;
    
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            isPresent = true;
            break;
        }
    }
    return isPresent;
}


int main(){
int n , target;
cin>>n>>target;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

bool isPresent = isTragetPresent(n, target, arr);

if(isPresent==true){
    cout<<"Yes "<<endl;
}
else{
    cout<<"No "<<endl;
}

cout<<endl;
return 0;
}