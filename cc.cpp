/*    


███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗
██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝
█████╗  ███████║██████╔╝██║   ██║█████╔╝ 
██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗ 
██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗
╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝

*/


#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf cout<<endl
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define fr(N)for(ll i=0;i<N;i++)
#define all(x) (x).begin(), (x).end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define vll vector<long long>
#define vi vector<int>
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;cin>>t;
    vector<string> s;
    while(t--){
        string r;cin>>r;
       //..// s.push_back(r);
        for(ll i=0; i<r.size() ;i++){
            s.push_back(r);
            r.erase(0,1);
            
        }
    }
    for(ll i=0; i<s.size()-1 ;i++){
        for(ll j=i+1; j<s.size() ;j++){
            if(s[i]==s[j])s[j].clear();
        }
    }
    ll ans=0;
    for(ll i=0; i<s.size() ;i++){
        if(s[i].empty()) ans++;
    }
    cout<<(s.size()-ans)<<nl;
    return 0;
}