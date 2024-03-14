#include<bits/stdc++.h>
using namespace std;
// length of array;


int main(){
int arr[] = {1, 2, 3, 4, 6, 7, 8};

int size = sizeof(arr)/sizeof(arr[0]);

cout<<size<<endl;
return 0;
}

// TC -> O(1)
// 1,2,3,4,5
// int size = sizeof(arr)/sizeof(arr[0]);
// upper -> sizeof(arr) ->  bytes -> 3+2+4+8+9-> x1
// lower -> sizeof(arr[0]) -> bytes of single array  -> x2
// size = upper/lower;
