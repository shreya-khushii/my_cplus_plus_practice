//Fibonacci series
#include<bits/stdc++.h>
using namespace std;
vector<int>fibArr(int n){
    vector<int>v;
    int a=0;
    int b=1;
    v.push_back(a);
    v.push_back(b);
    int c=0;
    for(int i=0;i<n-2;i++){
      c=a+b;
      v.push_back(c);
    a=b;
    b=c;
    }
    return v;
}
int main(){
    int n;
    cin>>n;
    vector<int>ans=fibArr(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}