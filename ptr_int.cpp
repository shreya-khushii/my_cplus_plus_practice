#include<bits/stdc++.h>
using namespace std;


int main(){
    int num = 5;
    
    int *ptr;
    
    ptr = &num;
    
    cout<<"memory location of number: "<<num<<" is: "<<ptr<<endl;
    
    cout<<"The number stored at memory location : "<<ptr<<" is: "<<*ptr<<endl;

    return 0;
}
