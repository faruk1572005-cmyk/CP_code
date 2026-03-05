
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


// void solve(){                                 //O(t)  
//     iint(n);
//     vll a(n);fr(n)cin>>a[i];                  //O(n)
//     int ans=0,cnt=0;
//     vll v;
//     fr(n-1){                                   //O(n)
//         if(a[i]==a[i+1]|| a[i]==(7-a[i+1]))
//             v.push_back(1);
//         else v.push_back(0);
//     }
//     v.push_back(0);
//     //fr(n)cout<<v[i]<<' ';nf;
//     fr(v.size()){                              //O(n)
//         if(v[i]==1) cnt++;
//         else{
//             ans+=ceil(cnt/2.0);
//             cnt=0;
//         }
//     }
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


void solve(){                          //O(t)
    iint(n);
    vll a(n);fr(n)cin>>a[i];           //O(n)
    vll grp={0,1,2,3,3,2,1};
    int ans=0;
    vll blk(n);                        
    fr(n){                             //O(n)
        blk[i]=grp[a[i]];
    }
   // fr(n)cout<<blk[i]<<' ';nf;
    for(int i=0 ;i<n ;){               //O(n)
        int cnt=0,j=i;
        while(j<n && blk[i]==blk[j]){
            cnt++;
            j++;
        }
        ans+=cnt/2;
        i=j;
    }                                    //-------
    cout<<ans <<nl;                      //O(t*n)
}
int32_t main() {
    fastio;
 
    int t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}