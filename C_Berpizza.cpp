
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
    int n;cin>>n;
    set<pair<int,int>>s;
    multiset<pair<int,int>>ml;
    int pos=1;
    fr(n){
        int x;cin>>x;
        if(x==1){
            int m;cin>>m;
            s.insert({pos,m});
            ml.insert({m,-(pos++)});
        }
        else if(x==2){
            int idx=s.begin()->first;
            int take=s.begin()->second;
            s.erase(s.begin());
            ml.erase({take,-idx});
            cout<<idx<<' ';
        }else{
            int take=ml.rbegin()->first;
            int idx=-ml.rbegin()->second;
            ml.erase(--ml.end());
            s.erase({idx,take});
            cout<<idx<<' ';
        }
    }
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}