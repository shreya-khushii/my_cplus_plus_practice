//Get the height, base, and hypotenuse  , find all the triplet that satisfy the pythagorean theorem.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,b,hy;
    cin>>h>>b>>hy;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=hy;k++){
                if(hy*hy==h*h+b*b){
                    cout<<h<<" "<<b<<" "<<" "<<hy<<endl;
                }
            }
        }
    }
    return 0;
}
