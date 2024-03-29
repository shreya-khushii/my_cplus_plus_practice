#include <bits/stdc++.h>
using namespace std;



int main() {
 
   int n;
   
   cin>>n;
   
   vector<int>arr;
   for(int i=0;i<n;i++){
       int elem;
       cin>>elem;
       arr.push_back(elem);
   }
   if(n<3){
       cout<<"Invalid"<<endl;
   }
   else{
        for(int i=0;i<n;i++){
         for(int j=i+1;j<n;j++){
           for(int k= j+1;k<n;k++){
               if(arr[i]==arr[j]+arr[k]){
                   cout<<i<<" "<<j<<" "<<k<<endl;
               }
           }
       }
   }
   
   }
  
    return 0;
}
