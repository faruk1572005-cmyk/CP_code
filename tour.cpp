#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    while(cin>>n>>t){
        int mul=n*t;
        if(mul>=9000)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}