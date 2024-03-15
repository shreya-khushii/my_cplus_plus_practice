#include<bits/stdc++.h>
using namespace std;

//add num at the end and tell disad of arra

int main(){
int arr[] = {1, 2, 3, 4, 6, 7, 8};
int numToAdd = 9;

int n = sizeof(arr)/sizeof(arr[0]);

int newSize = n+1;

int newArray[newSize];

for(int i=0;i<n;i++){
    newArray[i] = arr[i];
}

newArray[newSize-1] = numToAdd;

for(int i=0;i<newSize;i++){
    cout<< newArray[i]<<" ";
}
cout<<endl;
return 0;
}