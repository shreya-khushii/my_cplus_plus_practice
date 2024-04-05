//power
#include<bits/stdc++.h>
using namespace std;

int findPow(int num,int exp){
    int result=1;
    for(int i=1;i<=exp;i++){
        result=result*num;
    }
    return result;
}

int main(){
    int num,exp;
    cin>>num>>exp;
    int pow=findPow(num,exp);
    cout<<pow<<endl;
return 0;    
}