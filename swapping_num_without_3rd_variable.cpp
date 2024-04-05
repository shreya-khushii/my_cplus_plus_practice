//Swap numbers without using 3rd variables
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"before swapping a="<<a<<" b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping a="<<a<<" b="<<b<<endl;
    return 0;
}
