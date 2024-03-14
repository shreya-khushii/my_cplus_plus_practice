#include<bits/stdc++.h>
using namespace std;
// we dont have size than


int main(){
int arr[100];

for(int i=0;i<100;i++){
    cin>>arr[i];
}

for(int i=0;i<100;i++){
    if(arr[i]>0){
         cout<<arr[i]<<" ";
    }
}

cout<<endl;
return 0;
}