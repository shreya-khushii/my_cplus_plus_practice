#include<bits/stdc++.h>
using namespace std;
int main(){
 string str1;
 cin>>str1;
 int n1=str1.length();
 string str2;
 cin>>str2;
 int n2=str2.length();
 string str;
for(int i=0;i<n1;i++){
    str=str+str1[i];
}
for(int i=0;i<n2;i++){
    str=str+str2[i];
}
cout<<str<<endl;
    return 0;
}