#include<bits/stdc++.h>
using namespace std;
int main(){
 int element;
 cin>>element;
 int location;
 cin>>location;
 int arr[100]={1,2,3,4,5};
 
 
 for(int i=5;i>=location-1;i--){
     arr[i+1]=arr[i];
 }
 arr[location-1]=element;
 
 for(int i=0;i<100;i++){
     if(arr[i]>0){
       cout<<arr[i]<<" ";
     }
 }
 cout<<endl;
    return 0;
}