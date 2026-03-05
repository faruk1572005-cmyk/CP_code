// /*    


// ███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗
// ██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝
// █████╗  ███████║██████╔╝██║   ██║█████╔╝ 
// ██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗ 
// ██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗
// ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝

// */


// #include <bits/stdc++.h>
// using namespace std;
 
// #define nl "\n"
// #define nf cout<<endl
// #define ll long long
// #define pb push_back
// #define ff first
// #define ss second
// #define fr(N)for(ll i=0;i<N;i++)
// #define all(x) (x).begin(), (x).end()
// #define cy cout << "YES\n"
// #define cn cout << "NO\n"
// #define vll vector<long long>
// #define vi vector<int>
 
 
// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
 
//     ll n;cin>>n;
//     string s;cin>>s;
//     ll le =(n-s.size());
//     fr(le)s.insert(0,"o");
//     cout<<s<<nl;
//     return 0;
// }

/*    


███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗
██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝
█████╗  ███████║██████╔╝██║   ██║█████╔╝ 
██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗ 
██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗
╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝

*/


#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf cout<<endl
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define fr(N)for(ll i=0;i<N;i++)
#define all(x) (x).begin(), (x).end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define vll vector<long long>
#define vi vector<int>
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll n;cin>>n;
    ll sum=0;
    for(int i=1 ;i<=n ;i++){
        sum+=i;
    }
    cout<<sum<<nl;
    return 0;
}