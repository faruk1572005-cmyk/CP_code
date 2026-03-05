// // /*    
// //    ________________________
// //    |                      |
// //    |   Md.Faruk Hossian   |
// //    |______________________|

// // */


// // #include <bits/stdc++.h>
// // using namespace std;
 
// // #define nl "\n"
// // #define nf cout<<endl
// // #define ll long long
// // #define pb push_back
// // #define cy cout << "YES\n"
// // #define cn cout << "NO\n"
// // #define vll vector<long long>
// // #define vi vector<int>


// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);

// //     int n;
// //     cin >> n;
// //      int m;cin>>m;
// //     vector<int> a(n);
    
   
// //     vector<int> freq(m + 1, 0);

// //     for (int i = 0; i < n; i++) {
// //         freq[a[i]]++;
// //     }

// //     for (int i = 0; i <= m; i++) {
// //         if (freq[i]) {
// //             cout <<freq[i] << nl;
// //         }
// //     }

// //     return 0;
// // }

// /*    


// ████████████████████████████████████████████████████
// ██                                                ██
// ██    ███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗   ██
// ██    ██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝   ██
// ██    █████╗  ███████║██████╔╝██║   ██║█████╔╝    ██
// ██    ██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗    ██
// ██    ██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗   ██
// ██    ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ██
// ████████████████████████████████████████████████████

// */


// #include <bits/stdc++.h>
// using namespace std;
 
// #define nl "\n"
// #define nf cout<<"\n"

// #define int long long
// #define uint unsigned long long int

// #define cy cout << "YES\n"
// #define cn cout << "NO\n"

// #define fr(N)for(int i=0;i<N;i++)
// #define frs(i,s,n) for(int i=s;i<(n);i++)
// #define fr1(i,n) for(int i=1;i <= (n);i++)
// #define vin(a) for(auto &i:a)cin >> i
// #define frg(x,a) for(auto x:a)

// #define vll vector<long long>
// #define vec(v,n) vector<int> v(n)
// #define get(v,n) vec(v,n);fr(i,n)cin >> v[i]

// #define iint(x) int x; cin >> x
// #define ichar(x) char x; cin >> x
// #define istring(x) string x; cin>>x
// #define istrings(x) string x; geline(cin,x)
// #define take(x) int x; cin >> x; while(x--)
// #define intput(x) int x;cin>>x;

// #define mxe(v) *max_element(v.begin(),v.end())
// #define mne(v) *min_element(v.begin(),v.end())

// #define psb(a) push_back(a)
// #define ppb pop_back()
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()
// #define sz(v)(int)(v.size())

// #define popcnt(x) __builtin_popcount11(x)
// #define clz(x) __builtin_clzll(x)
// #define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)


// void solve(){
//     int n,m;cin>>n>>m;
//     map<int,int> mp;
//     fr(n){
//         iint(x);
//         mp[x]++;
//     }
//     for(auto x:mp){
//         cout<<x.second<<nl;
//     }
// }
// int32_t main() {
//     fastio;
 
//     int t=1;
    
//     while(t--)solve();
//     return 0;
// }

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
#define nf cout<<"\n"

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

#define iint(x) int x; cin >> x
#define ichar(x) char x; cin >> x
#define istring(x) string x; cin>>x
#define istrings(x) string x; geline(cin,x)
#define take(x) int x; cin >> x; while(x--)
#define intput(x) int x;cin>>x;

#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())

#define psb(a) push_back(a)
#define ppb pop_back()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz(v)(int)(v.size())

#define popcnt(x) __builtin_popcount11(x)
#define clz(x) __builtin_clzll(x)
#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve(){
    int n;cin >> n;
    int m;cin>>m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        iint(x);
        a[x]++;
    }
 
    for (int i = 1; i <= m; i++) {
        cout <<a[i] << nl;
    }
}
int32_t main() {
    fastio;
 
    int t=1;
    
    while(t--)solve();
    return 0;
}
