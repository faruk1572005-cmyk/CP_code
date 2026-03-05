
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

#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)

void solve(){
    int n,k;cin>>n>>k;
    map<int,vll >mp;
    for(int i=0 ;i<n ;i++){
        int x;cin>>x;
        mp[x].push_back(i);
    }
    // frg(x,mp){
    //     cout<<x.first<<"-->";
    //     frg(y,x.second){
    //         cout<<y<<' '; 
    //     }
    //     nf;
    // }
    fr(k){
        int a,b;cin>>a>>b;
        if(mp.find(a)==mp.end() || mp.find(b)==mp.end()){
            cn;
            continue;
        }
        if(mp[b].back()>mp[a][0])cy;
        else cn;

    }
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}