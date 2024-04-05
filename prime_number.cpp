#include<bits//stdc++.h>
using namespace std;
bool checkprime(int number){
    if(number<=1){
        return false;
    }
    for(int i=2;i<number;i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    int number;
    cin>>number;
    bool isprime=checkprime(number);
    if(isprime){
        cout<<"prime number"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    return 0;
}