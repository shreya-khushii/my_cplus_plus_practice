#include<bits/stdc++.h>
using namespace std;
// to uppercase 

int main(){
 string str;
 cin>>str;
  
 int n = str.length();
 
 for(int i=0;i<n;i++){
     str[i] = toupper(str[i]);
 }

 cout<< str<<endl;

 return 0;
}
