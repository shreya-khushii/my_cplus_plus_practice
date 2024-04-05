//Write a C++ program to calculate and print the multiplication table using nested for loops and return this in a vector and print
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<=10;i++){
        v.push_back(n*i);
    }
    for(int i=0;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<v[i]<<endl;
    }
    return 0;
}

// 5*0=0
// 5*1=5
// 5*2=10
// 5*3=15
// 5*4=20
// 5*5=25
// 5*6=30
// 5*7=35
// 5*8=40
// 5*9=45
// 5*10=50
