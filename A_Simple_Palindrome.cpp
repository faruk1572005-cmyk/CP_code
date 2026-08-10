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
    string s="aeiou";
    vector<string> a(5);
    for(int i=0;i<n;){
        for(int j=0;j<5 && i<n;i++,j++){
            a[j].push_back(s[j]);
        }
    }
    for(auto i:a)cout<<i;
    nf;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}