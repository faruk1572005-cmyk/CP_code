#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
         string x;
         cin>>x;
         char y=x[0];
         int l=x.length();
         for(int i=1 ; i<l ; i++){
             if(y>x[i])y=x[i];
         }
         int s=y-'0';
         cout<<s <<endl;
    }
    return 0;
}