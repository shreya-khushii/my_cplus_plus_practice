#include<bits/stdc++.h>
using namespace std;


int main(){
    char ch = 'a';
    
    char *ptr;
    
    ptr = &ch;
    
    cout<<"memory location of character: "<<ch<<" is: "<<ptr<<endl;
    
    cout<<"The character stored at memory location : "<<ptr<<" is: "<<*ptr<<endl;

    return 0;
}
