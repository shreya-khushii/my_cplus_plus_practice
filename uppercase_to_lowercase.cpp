//Change all the uppercase to lowercase
#include<bits//stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.length();
    for(int i=0;i<n;i++){
    str[i]=tolower(str[i]);
    }
    cout<<str<<endl;
    return 0;
    
}