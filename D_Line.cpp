
/*    


████████████████████████████████████████████████████
██                                                ██
██    ███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗   ██
██    ██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝   ██
██    █████╗  ███████║██████╔╝██║   ██║█████╔╝    ██
██    ██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗    ██
██    ██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗   ██
██    ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ██
████████████████████████████████████████████████████

*/


#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf cout<<"\n"

#define int long long
#define uint unsigned long long

#define cy cout << "YES\n"
#define cn cout << "NO\n"

#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)

#define vll vector<long long>
#define vec(v,n) vector<int> v(n)
#define get(v,n) vec(v,n);fr(i,n)cin >> v[i]

#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve(){
    int n;cin>>n;
    string s;
    cin>>s;
    int ans = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='R') ans+=(n-i-1);
        else ans+=i;
    }
    vll v;
    for(int i=0; i<n; i++){
        if(s[i]=='L'){
            int x = n-i-1;
            int y = i;
            v.push_back(x-y);
        }
        else if(s[i]=='R'){
            int x = i;
            int y = n-i-1;
            v.push_back(x-y);
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0; i<n; i++){
        ans+=max(0ll,v[i]);
        cout<<ans<<' ';
    }
    cout<<nl;

}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}