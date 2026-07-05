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
    int a,b,c;cin>>a>>b>>c;
    if(a==b)cout<<0<<nl;
    else if(__gcd(a,c)==__gcd(b,c))cout<<1<<nl;
    else if( __gcd(a,c+1)== __gcd(b,c+1))cout<<2<<nl;
    else cout<<3<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}