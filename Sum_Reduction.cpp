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
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a)cin>>i;
    vector<int > bit(32);
    for(auto i:a){
        for(int j=0;j<=31;j++){
            if((i>>j)&1)bit[j]++;
        }
    }

    for(auto i:bit)if(i>1){cout<<"No\n";return;}
    cout<<"Yes\n";
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}