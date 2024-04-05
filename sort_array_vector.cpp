//Check if array is sorted on not
#include<bits/stdc++.h>
using namespace std;

bool  is_array_sorted(vector<int> v){
    for(int i=1;i<v.size();i++){
        if(v[i-1]>v[i]){
            return false;
        }
    }
  return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
     for(int i=0;i<n;i++){
         cout<<v[i]<<" ";
     }
    cout<<endl;
   bool isSorted=is_array_sorted(v);
   if(isSorted==true){
       cout<<"array is sorted "<<endl;
   }
   else{
       cout<<"array is not sorted "<<endl;
   }
   
    return 0;       
  }