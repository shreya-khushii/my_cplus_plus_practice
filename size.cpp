#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int>arr;

for(int i=1;i<10;i++){
    arr.push_back(i);
}


cout<<"Before size: "<<arr.size()<<endl;

arr.clear();




cout<<"After size: "<<arr.size()<<endl;
 return 0;
}