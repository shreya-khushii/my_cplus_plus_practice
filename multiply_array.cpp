#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}

int multiple =1;

for(int i=0;i<n;i++){
    multiple= multiple*a[i];
}

cout<<multiple<<endl;
 return 0;
}