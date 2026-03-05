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
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define fr(N)for(ll i=0;i<N;i++)
#define fr1(N)for(ll i=1;i<=N;i++)
#define all(x) (x).begin(), (x).end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define vll vector<long long>
#define vi vector<int>
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int x=200005;
    ll n,k,q;cin>>n>>k>>q;
    vll a(x);
    fr1(n){
        int l,r;cin>>l>>r;
        a[l]++;
        a[r+1]--;
    }
    fr1(x){
        a[i]=a[i]+a[i-1];
    }
    fr1(x){
        if(a[i]>=k)a[i]=1;
        else a[i]=0;
    }
    fr1(x){
        a[i]=a[i]+a[i-1];
    }
    fr(q){
        ll c,d;cin>>c>>d;
        cout<<a[d]-a[c-1]<<nl;
    }
    return 0;
}


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
//     int x=200005;
//     int n,k,q;cin>>n>>k>>q;
//     vll a(x);
//     fr(n){
//         int l,r;cin>>l>>r;
//         for(ll j=l; j<=r ; j++){
//             a[j]++;
//         }
//     }
//     fr(q){
//         int ans=0;
//         int c,b;cin>>c>>b;
//         for(ll j=c ;j<=b;j++){
//             if((a[j])>=k)ans++;
//         }
//         cout<<ans<<nl;
//     }
    
//     return 0;
// }