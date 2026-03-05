
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

#define all(x) (x).begin(), (x).end()
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())

#define vll vector<long long>
#define vi vector<int>
#define vec(v,n) vector<int> v(n)
#define vec2(v,x,y) vector<vector<int>> v(x, vector<int>(y));

#define take(x) int x; cin >> x
#define get(v,n) vec(v,n);fr(i,n)cin >> v[i]

#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())

#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v)(int)(v.size())
#define sq(x) sqrtl(x)

#define ff first
#define ss second

#define popcnt(x) __builtin_popcount11(x)
#define clz(x) __builtin_clzll(x)
#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)

int even_cnt(int l, int r){
    return r/2-(l-1)/2;
}
int odd_cnt(int l, int r){
    return (r+1)/2-l/2;
}

int32_t main(){
    fastio;
    
    take(t);
    while (t--){
        string s;cin>>s;
        int n=s.size();
        int U=0;
        vll a;
        fr(n){
            if (s[i] == 'u')U++;
            else a.push_back(i + 1);
        }
        if (a.empty()){
            int even=n/2;     
            int odd=(n+1)/2; 
            int sa = max(even,odd)-1;
            cout<<U-sa <<nl;
            continue;
        }
        int k =a.size();
        int sum=0;
        for (int i=0;i<k-1;i++) {
            int l =a[i],r = a[i+1];
            int even=even_cnt(l,r);
            int odd =odd_cnt(l,r);
            int sc;
            if (l%2==r%2) {
                if (l%2==0)sc=even-1;
                else sc=odd-1;
            } else sc =max(even-1,odd-1);
            sum+=sc;
        }
        int A=a.front();
        int Le = 0;
        for (int i = 1;i<=A;i++) {
            int scc;
            if (i==A)scc = 0;
            else {
                int even =even_cnt(i,A);
                int odd =odd_cnt(i,A);
                if (i%2==A%2) {
                    if (i%2==0)scc =even-1;
                    else scc=odd-1;
                } else  scc=max(even-1,odd-1);
            }
            Le=max(Le,scc);
        }
        int ak=a.back();
        int Ri = 0;
        for (int i=ak;i<=n;i++) {
            int sc;
            if (i==ak) sc=0;
            else{
                int ev=even_cnt(ak,i);
                int od=odd_cnt(ak,i);
                if (ak%2==i%2){
                    if (ak%2==0)sc=ev-1;
                    else sc=od-1;
                } else sc=max(ev-1,od-1);

            }
            Ri=max(Ri,sc);
        }
        int sa =Le+sum+Ri;
        int ans =U-sa;
        cout<<ans<<nl;
    }

    return 0;
}