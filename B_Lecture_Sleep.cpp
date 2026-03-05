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
 
    ll n,k,ans=0;cin>>n>>k;
    vll a(n),t(n),sum(n+1);
    fr(n)cin>>a[i];
    ll s=0;
    fr(n){
        cin>>t[i];
        t[i]?ans+=a[i]:s+=a[i];
        sum[i+1]=s;
    }
    int maxx=0;
    for(ll i=k ;i<=n;i++){
        int ss=sum[i]-sum[i-k];
        maxx=max(maxx,ss);
    }
    cout<<maxx+ans<<nl;
    return 0;
}