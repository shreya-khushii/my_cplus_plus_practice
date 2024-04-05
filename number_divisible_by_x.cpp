//Count how many numbers in an array is divisible by number x
#include<bits//stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%x==0){
            count=count+1;
        }
    }
    cout<<count<<endl;
    return 0;
}
