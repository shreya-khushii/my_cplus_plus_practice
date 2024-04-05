//square
#include<bits/stdc++.h>
using namespace std;

int findPow(int num){
    int exp=2;
    int result=1;
    for(int i=1;i<=exp;i++){
        result=result*num;
    }
    return result;
}

int main(){
    int num;
    cin>>num;
    int pow=findPow(num);
    cout<<pow<<endl;
return 0;    
}