//Develop a C++ program to find and print the factorial of a given number.
#include<bits/stdc++.h>
using namespace std;

int checkFactorial(int element){
     int fac=1;
     for(int i=1;i<=element;i++){
       fac=fac*i;
   }
   return fac;
}
 vector<int>primeArr(vector<int>arr,int n){
     vector<int>ans;
     for(int i=0;i<n;i++){
         int factorial=checkFactorial(arr[i]);
                 ans.push_back(factorial);
     }
     return ans;
 }


int main(){
    int n;
    cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++){
         cin>>arr[i];
      }
    
    vector<int>ans=primeArr(arr,n);
     for(int i=0;i<ans.size();i++){
         cout<<ans[i]<<" ";
    }
    return 0;
}



