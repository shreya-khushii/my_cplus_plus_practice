#include<bits/stdc++.h>
using namespace std;

void example(int &a){
    a= 10;
}

void example2(int &a){
    a=20;
}

int main(){
     int a =5;
     example(a);
     cout<<a<<endl;

      example2(a);
      cout<<a<<endl;
    return 0;
}
