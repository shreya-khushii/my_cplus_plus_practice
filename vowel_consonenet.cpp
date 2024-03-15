#include<bits/stdc++.h>
using namespace std;
// n and array of char, u need to print all the present vowels.

int main(){
 int n;
 cin>>n;
 
 char str[n];
 for(int i=0;i<n;i++){
     cin>>str[i];
 }
 
 for(int i=0;i<n;i++){
     if(str[i] =='a' || str[i]=='e' || str[i] =='i' || str[i]=='o' || str[i]=='u'){
         cout<<str[i]<<" ";
     }
 }
 cout<<endl;
 
 
 return 0;
}

