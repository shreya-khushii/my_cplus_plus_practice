#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>arr;

for(int i=1;i<10;i++){
    arr.push_back(i);
}

for(auto x: arr){
    cout<<x<<" ";
}
cout<<endl;

reverse(arr.begin(), arr.end());
 
 for(auto x: arr){
    cout<<x<<" ";
}
cout<<endl;

 return 0;
}