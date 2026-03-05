#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s,v;
        cin>>s>>v;
        int l=s.length(),lv=v.length();
        if(l>=lv) {
            for(int i=0 ; i<lv ; i++){
                cout<<s[i]<<v[i];
            }
            for(int i=lv ; i<l ; i++){
                cout<<s[i];
            }
        }
        else{
            for(int i=0 ; i<l ; i++){
                cout<<s[i]<<v[i];
            }
            for(int i=l ; i<lv ; i++){
                cout<<v[i];
            }

        }
        cout<<endl;
    }
    return 0;
}