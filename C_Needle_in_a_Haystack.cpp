/*    
   ________________________
   |                      |
   |   Md.Faruk Hossian   |
   |______________________|

*/


#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf cout<<endl
#define ll long long
#define pb push_back
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define vll vector<long long>
#define vi vector<int>
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll n; cin>>n;
    while(n--){
         string s,t,s1,t1; cin>>s>>t;
         sort(t.begin(),t.end());
         ll feq[26]={0};
         ll frq[26]={0};
         s1=s;
         for(char c:t){
            feq[c-'a']++;
         }
         for(char c:s){
            frq[c-'a']++;
         }
         bool ok=false;
         for(int i=0 ; i<26 ; i++){
              if(frq[i]!=0) {
                 if(feq[i]<frq[i]) {
                    cout<<"Impossible\n";
                    ok=true;
                    break;
                  }
                }
                
            }
            if(ok) continue;
           
         for(int i=0 ; i<26 ;i++)feq[i]=feq[i]-frq[i];
    
         for(char i='a' ;i<='z' ;i++){
            for(int j=0 ;j<feq[i-'a'] ;j++){
                t1.push_back(i);
            }
         }
         //cout<<t1<<nl;
          int x=0,y=0;
         for(;x<t1.size() && y<s.size();){
            if(t1[x]<s[y]){
                cout<<t1[x++];
            }else{
                cout<<s[y++];

            }
         
         }
         if(x<(t1.size())){
            for(x ; x<t1.size(); x++)cout<<t1[x];
         }
         else{
            for(y ; y<s.size(); y++)cout<<s[y];
         }
         nf;
    }
    return 0;
}