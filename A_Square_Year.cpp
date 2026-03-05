/*  ________________________
    |                      |
    |  Md. Faruk Hossain   |
    |______________________|                      
*/


#include<bits/stdc++.h>
using namespace std;

void solv(){
    int n;
    cin>>n;
    int s=sqrt(n);
    if((s*s)==n)cout<<"0 "<<s<<endl;
    else cout<<"-1"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) solv();
    return 0;
}