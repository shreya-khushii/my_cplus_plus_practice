//Given a number print the week 1 to 7 , if other than this print invalid
#include<bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cin>>day;
    if(day==1){
        cout<<"Monday"<<endl;
    }
     else if(day==2){
        cout<<"Tuesday"<<endl;
    }
    else if(day==3){
        cout<<"Wednesday"<<endl;
    }
      else if(day==4){
        cout<<"Thursday"<<endl;
    }
     else if(day==5){
        cout<<"Friday"<<endl;
    }
      else if(day==6){
        cout<<"Saturday"<<endl;
    }
      else if(day==7){
        cout<<"Sunday"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    return 0;
}