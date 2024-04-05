//Check if number is power of 2
#include<bits/stdc++.h>
using namespace std;

bool checkPow(int num){
    while(num>1){
        if(num%2==1 || num<=1){
            return false;
        }
        num=num/2;
    }
    return true;
}

int main(){
    int num;
    cin>>num;
    bool ans=checkPow(num);
    if(ans==true){
        cout<<num<<" is power of 2";
    }
    else{
         cout<<num<<" is not power of 2";
    }
}