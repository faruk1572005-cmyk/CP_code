
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
#define nf cout<<endl

#define int long long
#define uint unsigned long long int

#define cy cout << "YES\n"
#define cn cout << "NO\n"

#define fr(N)for(int i=0;i<N;i++)
#define frs(i,s,n) for(int i=s;i<(n);i++)
#define fr1(i,n) for(int i=1;i <= (n);i++)
#define vin(a) for(auto &i:a)cin >> i
#define frg(x,a) for(auto x:a)

#define vll vector<long long>
#define vec(v,n) vector<int> v(n)
#define get(v,n) vec(v,n);fr(i,n)cin >> v[i]

#define iint(x) int x;cin>>x;
#define take(x) int x; cin >> x; while(x--)
#define intput(x) int x;cin>>x;

#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())

#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v)(int)(v.size())

#define ff first
#define ss second

#define popcnt(x) __builtin_popcount11(x)
#define clz(x) __builtin_clzll(x)
#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)


int32_t main() {
    fastio;
    iint(n)
    vll v(n);fr(n)cin>>v[i];
    fr(v.size())cout<<v[i]<< " ";nf;nf;
    iint(val);
    v.push_back(val);
    int cur_idx=v.size()-1;
    while(1){
       int par_idx=(cur_idx-1)/2;
       if(v[cur_idx]>v[par_idx])swap(v[cur_idx],v[par_idx]);
       else break;
       cur_idx=par_idx;
    }
    fr(v.size())cout<<v[i]<< " ";

 
    
    return 0;
}