#include<bits/stdc++.h>
using namespace std;
// find the max and min element in an sorted and not-sorted array.


int main(){
int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){
   cin>>arr[i];
}

int maxElement = arr[0];

for(int i=1;i<n;i++){
    if(arr[i]>maxElement){
        maxElement = arr[i];
    }
}

cout<<"max elemenet: "<<maxElement<<endl;
return 0;
}

// TC -> O(n)

//  6 7 8 1 2 3 5 -> find the max elemenet
 
//  maxElement  = a[0]= 6
 

//  i =1 -> a[1] -> 7 -> 7>maxElement -> true -> maxElement = 7;
 
//  i=2 -> a[2] -> 8-> 8>maxElement -> true -> maxElement =8;
 
//  i =3 -> a[3] -> 1 -> 1>maxElement -> false;
 
//  i =4 -> a[4] -> 2 -> 2> maxElement -> flase;
 
//  i =5 -> a[5] -> 3 -> 3> maxElement -> false;
 
//  i =6 -> a[6] -> 5 -> 5>maxElement -> false;
 
//  maxElement = 8;