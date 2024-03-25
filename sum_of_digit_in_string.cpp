#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
int sum =0;

for(auto x:str){
    if(x>='0' && x<='9'){
        sum = sum+(x-'0');
    }
}

cout<<sum<<endl;
 return 0;
}

// if u want to convert any string digit into integer just do (char num -'0')