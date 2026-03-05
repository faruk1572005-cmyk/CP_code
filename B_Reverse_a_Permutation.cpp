
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
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve(){
    int n;cin>>n;
    vll a(n),v(n);fr(n){
        cin>>a[i];
        v[i]=a[i];
    }
    sort(rall(v));
    if(a==v){
        fr(n)cout<<a[i]<<' ';nf;
        return;
    }
    int nc=n;
    for(int i=0 ;i<n;i++){
        if(a[i]!=v[i])break;
        nc--;
    }
    int id=n-nc;
    for(int i=n-nc ;i<n ;i++){
        if(a[i]==nc){
            id=i;
            break;
        }
    }
    reverse(a.begin()+(n-nc),a.begin()+(id+1));
    //cout<<nc<<' '<<id<<nl;
    fr(n)cout<<a[i]<<' ';nf;
    
    
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}