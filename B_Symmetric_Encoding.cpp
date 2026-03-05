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
// #define ll long long
// #define pb push_back
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define vll vector<long long>
// #define vi vector<int>
 
 
// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
 
//     int t;cin>>t;
//     while(t--){
//         char j='n';
//         int n;cin>>n;
//         int nc=n;
//         char a[255];
//         string c,s;cin>>s;
//         c=s;
//         sort(c.begin(),c.end());
//        // cout<<c<<nl;
//         for(int i=1 ;i<n ;i++){
//             if(c[i-1]==c[i]){
//                 c.erase(i,1);
//                 i--;
//                 n--;
//             }
//         }
//         //cout<<c<<nl;
//         for(int i=n-1,j=0; i>=0 ;j++, i--){
//             a[(int)c[i]]=c[j];
//         }
//         for(int i=0 ;i<nc ; i++){
//             cout<<a[s[i]];
//         }
//         //cout<<c<<nl;
//         nf;
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
#define nf cout<<"\n"

#define int long long
#define uint unsigned long long

#define cy cout << "YES\n"
#define cn cout << "NO\n"

#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)

#define vll vector<long long>
#define vec(v,n) vector<int> v(n)
#define get(v,n) vec(v,n);fr(i,n)cin >> v[i]

#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve(){
    int n;cin>>n;
    string s;cin>>s;
    set<char>st;
    for(auto ch:s){
        st.insert(ch);
    }
    string t="";
    for(auto ch:st){
        t+=ch;
    }
    map<char,char>mp;
    for(int i=0,j=t.size()-1;i<t.size(); i++,j--){
        mp[t[i]]=t[j];
    }
    for(int i=0 ;i<n ;i++){
        cout<<mp[s[i]];
    }nf;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}