//Count the number of zeros and ones in an array.
#include<bits/stdc++.h>
using namespace std;
bool checkZero(int element){
          if(element!=0){
            return true;
        }
    return false;
}

bool checkOne(int element){
       if(element==0){
            return true; 
        }
    return false;
}


vector<int>checkNum(vector<int>arr,int n){
    vector<int>v;
    for(int i=0;i<n;i++){
        bool totalZero=checkZero(arr[i]);
        if(totalZero==true){
            v.push_back(arr[i]);
        }
    }    
    for(int i=0;i<n;i++){
     bool totalOne=checkOne(arr[i]);
         if(totalOne==true){
             v.push_back(arr[i])
         }
    }
    return v;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=checkNum(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<arr[i];
    }
    
    return 0;
}



//Count the number of zeros and ones in an array.
#include<bits/stdc++.h>
using namespace std;


vector<int>checkNum(vector<int>arr,int n){
    vector<int>v;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count=count+1;
        }
        else{
              v.push_back(arr[i]);
        }
    }  
    for(int i=0;i<count;i++){
        v.push_back(0);
    }
   
    return v;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans=checkNum(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}