//Replace space with char ch
//have to take a string n and character character
//example  "ab deac fd",ch="z"
//answer "abzdeaczfd"
#include<bits//stdc++.h>
using namespace std;
int main (){
   string str="ab deac fd";
   char ch='z';
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            str[i]=ch;
        }
    
    }
    cout<<str<<endl;
    return 0;
}

