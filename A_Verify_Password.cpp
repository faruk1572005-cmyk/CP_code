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
        ll n;cin>>n;
        string s;cin>>s;
        string s1=s;
        sort(s.begin(),s.end());
        (s==s1)?cout<<"YES"<<nl:cout<<"NO"<<nl;

    }
    return 0;
}