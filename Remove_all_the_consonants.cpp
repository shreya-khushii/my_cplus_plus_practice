//Remove  all the consonants
#include<bits//stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string newString;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='v'){
            newString=newString+str[i];
        }
    }
    cout<<newString<<endl;
    return 0;
}
