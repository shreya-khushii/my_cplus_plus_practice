#include<bits/stdc++.h>
using namespace std;
int main(){
 int location;
 cin>>location;
 if(location>=0 && location<=5){
 int arr[100]={1,2,3,4,5};
 
 for(int i=location-1;i<5;i++){
     arr[i]=arr[i+1];
 }
 
 for(int i=0;i<100;i++){
     if(arr[i]>0){
       cout<<arr[i]<<" ";
     }
 }
 cout<<endl;
 }
 else{
     cout<<"invalid"<<endl;
 }
    return 0;
}