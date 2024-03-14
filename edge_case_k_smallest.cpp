#include<bits/stdc++.h>
using namespace std;


int kthSmallestElement(int k, int arr[]){
   int smallestElement = arr[k-1];
   return smallestElement;
}

int main(){
int n, k;
cin>>n>>k;

if(k>=1 && k<=n)
{
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<< kthSmallestElement(k,arr)<<endl;
}
else
{
    cout<< "invalid index" <<endl;
}

return 0;
}

