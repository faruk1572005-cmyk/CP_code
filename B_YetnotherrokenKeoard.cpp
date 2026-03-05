
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
//     istring(s);
//     stack<pair<char,int>>up,lo;
//     int i=0;
//     for(auto x:s){i++;
//         if(x>='A'&&x<='Z'){
//             if(x=='B'){
//                 if(!up.empty())up.pop();
//             }else up.push({x,i});
//         }else{
//             if(x=='b'){
//                 if(!lo.empty())lo.pop();
//             }else lo.push({x,i});
//         }
//     }
//     reverse(all(s));
//    // cout<<s<<nl;
//     string ans="";
    
//     for(auto x:s){i--;

//         if(!up.empty())if(x==up.top().first && i==up.top().second){
//             ans+=x;
//             up.pop();
//         }
//         if(!lo.empty()) if(x==lo.top().first&&i==lo.top().second){
//             ans+=x;
//             lo.pop();
//         }
//     }
//     reverse(all(ans));
//     cout<<ans<<nl;
// }
// int32_t main() {
//     fastio;

//     int t=1;
//     cin>>t;
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
#define uint unsigned long long 

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
    istring(s);
    reverse(all(s));
    string ans="";
    uint lo=0,up=0;
    for(auto x:s){
        if(x=='B')up++;
        else if(x=='b')lo++;
        else if(x>='A'&& x<='Z'){
            if(!up){
                ans+=x;
            }else{
                up--;
            }
        }
        else{
            if(!lo)ans+=x;
            else lo--;
        }
    }
    reverse(all(ans));
    cout<<ans<<nl;
}
int32_t main() {
    fastio;
 
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}