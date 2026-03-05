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
 
    ll t;cin>>t;
    while(t--){
        ll n,d=1; cin>>n;
        vll a(n);
        for(ll i=0 ; i<n ; i++) cin>> a[i];
        sort(a.begin(),a.end());
        for(ll i=0 ; i<n-1 ; i++) if(a[i]!=a[i+1])d++;
        ll ans=d;
        for(ll i=0 ;i<n ; i++){
            if(a[i]>=d){
                ans=a[i];
                break;
                
            }
        }
        cout<<ans<<nl;

    }
    return 0;
}