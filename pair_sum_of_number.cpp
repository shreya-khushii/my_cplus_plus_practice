//if i>j find all the pair sum of the numbes
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        for(int j=i+1;j<n;j++){
              sum=sum+a[j];
        }
    }
    cout<<"sum when i>j "<<sum;
    return 0;
}