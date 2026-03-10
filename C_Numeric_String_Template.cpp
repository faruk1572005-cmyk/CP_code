
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
    vll a(n);fr(n)cin>>a[i];
    int t;cin>>t;
    fr(t){
        string s;cin>>s;
        if(a.size()!=s.size()){
            cn;
            continue;
        }
        map<char,int>ms;
        map<int,char>ma;
        bool ok=true;
        for(int j=0; j<n;j++){
            if(ms.find(s[j])==ms.end()) ms[s[j]]=a[j];
            if(ma.find(a[j])==ma.end()) ma[a[j]]=s[j];
            if(ms[s[j]]!=a[j] || ma[a[j]]!=s[j]){
                cn;
                ok=false;
                break;
            }
        }
        if(ok){
            cy;
        }
    }
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}