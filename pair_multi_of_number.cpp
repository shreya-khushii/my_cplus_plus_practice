//if i>j find all the pair multiplication of the numbrs 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int multi=1;
    for(int i=0;i<n;i++){
        multi=multi*a[i];
        for(int j=i+1;j<n;j++){
            multi=multi*a[j];
        }
       
    }
     cout<<"multi when i>j "<<multi<<endl;
    return 0;
}