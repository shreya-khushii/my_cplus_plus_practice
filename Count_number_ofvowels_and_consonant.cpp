//Count the number of vowels and consonant in the given string
#include<bits//stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string newString;
    int n=str.length();
    int countVowels=0;
    int countConsonant=0;
    for(int i=0;i<n;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='i'||str[i]=='v'){
            countVowels=countVowels+1;
        }
        else{
            countConsonant=countConsonant+1;
        }
    }
    cout<<countVowels<<endl;
    cout<<countConsonant<<endl;
    return 0;
}

