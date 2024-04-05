#include<bits/stdc++.h>
using namespace std;
int main(){
 string str1;
 cin>>str1;
 string str2;
 cin>>str2;
 int n1=str1.length();
 int n2=str2.length();
 string str;
for(auto x:str1){
    str=str+x;
}
for(auto x:str2){
    str=str+x;
}
cout<<str<<endl;
    return 0;
}