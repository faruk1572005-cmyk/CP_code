
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
    vll a(n+1);fr(n)cin>>a[i+1];
    int mm=1,mx=n,l=1,r=n;
    while((r-l)>2){
        bool ok=true;
        if(a[l]==mm){
            ok=false;
            l++;
            mm++;
        }else if( a[l]==mx){
            ok=false;
            mx--;
            l++;
        }
        if(a[r]==mm){
            ok=false;
            r--;
            mm++;
        }else if( a[r]==mx){
            ok=false;
            mx--;
            r--;
        }
        if(ok){
            cout<<l<<" "<<r<<nl;
            return;
        }
    }
    cout<<-1<<nl;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}