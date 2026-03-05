/*    
   ________________________
   |                      |
   |   Md.Faruk Hossian   |
   |______________________|

*/


#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf endl
#define ll long long
#define pb push_back
#define _ << ' ' <<
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll t;cin>>t;
    while(t--){
        ll n,m,l=INT_MIN,c=0;cin>>n>>m;
        string s;cin>>s;
        for(ll i=0 ; i<n ; i++){
            if(s[i]=='1'){
                l=i+m;
            }
            else{
                if(i>l)c++;
            }
        }
        cout<<c<<nl;
    }
    return 0;
}