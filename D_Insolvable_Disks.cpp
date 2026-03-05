
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
#define all(x) (x).begin(), (x).end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define vll vector<long long>
#define vi vector<int>
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vll a(n);
        fr(n)cin>>a[i];
        vll r(n-1);fr(n-1)r[i]=a[i+1]-a[i];
        ll ans=n-1;
        if(n==1){
            cout<<0<<nl;
            continue;
        }
        for(int i=1 ;i<n-2 ;i++){
            if(r[i]>=r[i-1]+r[i+1])ans--;
        }
        cout<<ans<<nl;

    }
    return 0;
}// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> x(n);
//         for (int i = 0; i < n; ++i) cin >> x[i];

//         // if (n == 1) {
//         //     cout << "0\n";
//         //     continue;
//         // }

//         vector<int> d(n - 1);
//         for (int i = 0; i < n - 1; ++i) d[i] = x[i + 1] - x[i];

//         int bad = 0;
//         for (int i = 1; i < n - 2; ++i) {   // check internal gaps (from second to second last)
//             if (d[i] >= d[i - 1] + d[i + 1]) ++bad;
//         }

//         cout << (n - 1) - bad << "\n";
//     }

//     return 0;
// }