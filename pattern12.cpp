//pattern12
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
  
    for(int i=1;i<=n;i++){
        int count=1;
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
       
    }
    return 0;
}
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 