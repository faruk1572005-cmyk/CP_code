
/*    


       ████████████████████████████████████████████████████
       ██               Md.Faruk Hossain                 ██
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
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)

void solve(){
    int n,x;cin>>n>>x;
    int ans=0;
//     for(int i=1;i<=n;i++){              //O(n*sqrt(x))
//         for(int j=1;j<=n;j++){
//             if(i*j>x)break;
//             if(i*j==x){
//                 ans++;
//                 //cout<<i<<' '<<j<<nl;
//             }
//             cout<<i*j<<' ';
//         }
//         nf;
//     }
//    // cout<<ans<<nl;
    for(int i=1;i*i<=x ;i++){        //O(sqrt(x))
        if(x%i==0){
            int j=x/i;
            if(i<=n && j<=n){
                ans++;
                if(i!=j)ans++;
            }
        }
    }
    cout<<ans<<nl;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}