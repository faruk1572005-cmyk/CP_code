#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    int n,x;cin>>n>>x;
    int od=0,ev=0;
    for(int i=0;i<n;i++){
        int val;cin>>val;
        if(val&1)od++;
        else ev++;
    }
    if(x==n && !(od&1)){cout<<"No\n";return;}
    if(od>=x){
        if(x&1){cout<<"Yes\n";return;}
        if(ev){cout<<"Yes\n";return;}
        cout<<"No\n";
    }
    else if(od)cout<<"Yes\n";
    else cout<<"No\n";
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}