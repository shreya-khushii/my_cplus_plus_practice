#include<bits/stdc++.h>
using namespace std;
// check if the size of 2 arrays are same of not -> if same print true;


int main(){
int arr1[] = {1, 2, 3, 4, 6, 7, 8};
int arr2[] = {1, 2, 3, 4, 6, 7};

int size1 = sizeof(arr1)/sizeof(arr1[0]);
int size2 = sizeof(arr2)/sizeof(arr2[0]);

if(size1==size2){
    cout<<"true"<<endl;
}
else{
      cout<<"false"<<endl;
}
return 0;
}