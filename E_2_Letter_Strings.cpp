
/*    


       ████████████████████████████████████████████████████
       ██               Md.Faruk Hossain                 ██
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
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)

void solve(){
    int n;cin>>n;
    map<string,int>m;
    fr(n){
        string s;cin>>s;
        m[s]++;
    }
    vector<string>v;
    frg(x,m)v.push_back(x.first);
    int ans=0;
    for(int i=0 ;i<v.size() ;i++){
        int cnt=0;
        for(int j=i+1 ;j<v.size() ;j++){
            if(v[i][0]==v[j][0] && v[i][1] != v[j][1] || v[i][1]==v[j][1] && v[i][0] != v[j][0])cnt+=m[v[j]];
        }
        ans+=m[v[i]]*cnt;
    }
    cout<<ans<<nl;
}

int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}