/*    
   ________________________
   |                      |
   |   Md.Faruk Hossian   |
   |______________________|

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

#define vint vector<long long>
#define vi vector<int>
#define vec(v,n) vector<int> v(n)
#define vec2(v,x,y) vector<vector<int>> v(x, vector<int>(y));

#define take(x) int x; cin >> x
#define get(v,n) vec(v,n);fr(i,n)cin >> v[i]

#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())

#define psb(a) push_back(a)
#define ppb pop_back()
#define aint(v) v.begin(),v.end()
#define raint(v) v.rbegin(),v.rend()
#define sz(v)(int)(v.size())
#define sq(x) sqrtl(x)

#define ff first
#define ss second

#define popcnt(x) __builtin_popcount11(x)
#define clz(x) __builtin_clzint(x)
#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
int32_t main() {
    fastio;

    int n,m,low,h;cin>>n>>m;
    int l=LLONG_MIN;
    int r=LLONG_MAX;
    for (int i=0;i<n;i++) {
        int sum=0;
        int ze=0;
        for (int j=0;j<m;j++) {
            int x;cin>>x;
            if (x==0)ze++;
            else sum+=x;
        }
        low=sum-ze*10000000;
        h=sum+ze*10000000;
        l=max(l,low);
        r=min(r,h);
    } 
    (l<=r)?cy:cn;
    return 0;
}