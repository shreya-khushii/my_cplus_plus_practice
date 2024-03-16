#include<bits/stdc++.h>
using namespace std;
//rever string, print the rever string

int main(){
 string str;
 cin>>str;
 
 int n = str.length();
 
 for(int i= n-1;i>=0;i--){
     cout<<str[i];
 }
 cout<<endl;
 
 return 0;
}
 