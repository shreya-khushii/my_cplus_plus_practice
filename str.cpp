#include<bits/stdc++.h>
using namespace std;

// array of char and print
// string -> array of char
int main(){
int n;
cin>>n;

char str[n];

for(int i=0;i<n;i++){
    cin>>str[i];
}

for(int i=0;i<n;i++){
    cout<<str[i]<<" ";
}

cout<<endl;
return 0;
}

