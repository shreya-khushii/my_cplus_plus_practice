#include<bits/stdc++.h>
using namespace std;

// find min element in vector
int main(){
vector<int>arr;

for(int i=10;i>=1;i--){
    arr.push_back(i);
}

int min = *min_element(arr.begin(), arr.end());
int max = *max_element(arr.begin(), arr.end());

cout<<min<<endl;
cout<<max<<endl;

 return 0;
}