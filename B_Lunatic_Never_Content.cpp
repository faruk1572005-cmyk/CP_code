
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

#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)

void solve(){
    int n;cin>>n;
    vll a(n);fr(n)cin>>a[i];
    int g=0;
    if(n==1){
        cout<<0<<nl;
        return;
    }
    for(int i = 0; i < n/2; i++){
        g = __gcd(g,abs(a[i] - a[n-1-i]));
        // cout<<g<<' ';
    }
    cout<<g<<nl;
    // int mx=*max_element(all(a));
    // for (int i=mx ;i>=1 ;i--){           //O(mx)
    //    vll v(n),c(n); 
    //     for(int j=0 ;j<n ;j++ ){       //O(n)
    //         v[j]=c[j]=a[j]%i;
            
    //     }
    //     //fr(n)cout<<c[i]<<' ';nf;
    //     reverse(all(c));           //O(n);
    //     if(c==v){
    //         cout<<i<<nl;
    //         return;
    //     }
        
    // }
    // cout<<0<<nl;
}
   
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}