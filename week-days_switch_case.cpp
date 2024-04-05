//Given a number print the week 1 to 7 , if other than this print invalid
#include<bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cin>>day;
    switch(day){
        case  1:
         cout<<"Monday"<<endl;
         break;
        case  2:
         cout<<"Tuesday"<<endl;
         break;
        case  3:
         cout<<"Wednesday"<<endl;
         break;
        case  4:
         cout<<"Thursday"<<endl;
         break;
        case  5:
         cout<<"Friday"<<endl;
         break;
        case  6:
         cout<<"Saturday"<<endl;
         break;
        case  7:
         cout<<"Sunday"<<endl;
         break;
        default :
         cout<<"Invalid"<<endl;
     
    }
       
}