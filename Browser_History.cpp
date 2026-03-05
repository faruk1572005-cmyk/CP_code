// /*    
//    ________________________
//    |                      |
//    |   Md.Faruk Hossian   |
//    |______________________|

// */


// #include <bits/stdc++.h>
// using namespace std;
 
// #define nl "\n"
// #define nf cout<<endl

// #define int long long
// #define uint unsigned long long int

// #define cy cout << "YES\n"
// #define cn cout << "NO\n"

// #define fr(N)for(int i=0;i<N;i++)
// #define frs(i,s,n) for(int i=s;i<(n);i++)
// #define fr1(i,n) for(int i=1;i <= (n);i++)
// #define vin(a) for(auto &i:a)cin >> i

// #define vll vector<long long>
// #define vi vector<int>
// #define vec(v,n) vector<int> v(n)
// #define vec2(v,x,y) vector<vector<int>> v(x, vector<int>(y));

// #define take(x) int x; cin >> x; while(x--)
// #define get(v,n) vec(v,n);fr(i,n)cin >> v[i]

// #define mxe(v) *max_element(v.begin(),v.end())
// #define mne(v) *min_element(v.begin(),v.end())

// #define psb(a) push_back(a)
// #define ppb pop_back()
// #define all(v) v.begin(),v.end()
// #define rall(v) v.rbegin(),v.rend()
// #define sz(v)(int)(v.size())
// #define st(x) strtl(x)

// #define ff first
// #define ss second

// #define popcnt(x) __builtin_popcount11(x)
// #define clz(x) __builtin_clzll(x)
// #define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)
 
// int32_t main() {
//     fastio;
 
//     list<string> l;
//     string s;
//     while (cin >> s){
//         if (s == "end") break;
//         l.push_back(s);
//     }
//     auto cur=l.begin();
//     take(t){
//         string cmd;cin>>cmd;
//         if (cmd=="visit"){
//             string addr;cin>>addr;
//             bool found = false;
//             for (auto it = l.begin(); it != l.end(); it++){
//                 if (*it == addr){
//                     cur=it;
//                     cout<<*cur<<nl;
//                     found=true;
//                     break;
//                 }
//             }
//             if (!found) cout<<"Not Available"<<nl;
//         }
//         else if (cmd=="next"){
//             auto tmp=cur;
//             tmp++;
//             if (tmp!=l.end()){
//                 cur=tmp;
//                 cout<<*cur<<nl;
//             }
//             else cout<<"Not Available"<<nl;
//         }
//         else if (cmd=="prev"){
//             if (cur !=l.begin()){
//                 cur--;
//                 cout<<*cur<<nl;
//             }
//             else cout<<"Not Available"<<nl; 
//         }
//     }
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
 
    list<string>l;
    string s;
    int idx=0;
    while(1){
        cin>>s;
        if(s=="end")break;
        l.push_back(s);
    }
    frg(e,l)cout<<e<<" ";
    nf;
    take(t){
        string x;cin>>x;
        if(x=="visit"){
            string y;cin>>y;
            bool ok=false;
            cout<<" 1 " <<y<<nl;
            for(int i=0 ;i<l.size();i++){
                
            }
            if(ok)cout<<y<<nl;
            else {
                cout<<"Not Available\n";
                idx=0;
            }
        }
        else if(x=="next"){
            idx++;
            if(l.size()<idx){
                idx--;
                cout<<"Not Available\n";
            }
            else cout<<*(next(l.begin(),idx-1))<<nl;
        }else if(x=="prev"){
            idx--;
            if(0>=idx){
                idx++;
                cout<<"Not Available\n";
            }
            else cout<<*(next(l.begin(),idx-1))<<nl;
        }
    }
    return 0;
}