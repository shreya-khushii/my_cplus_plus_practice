//Rev sorted array/vector
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    
   sort(v.begin(), v.end());
   reverse(v.begin(),v.end());
   for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
   }
   cout<<endl;
    return 0;
}