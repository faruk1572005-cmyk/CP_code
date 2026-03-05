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
 
    ll n,sum=0,ans=0;cin>>n;
    vll a(n+1);
    for(ll i=1 ;i<=n;i++){
        cin>>a[i];sum+=a[i];
    }
    if(sum%3==0){
        ll c=0,l=sum/3,r=l*2;sum=0;
        for(ll i=1 ;i<n; i++){
            sum+=a[i];if(sum==r)ans+=c;
            if(sum==l)c++;
        }
    }
    cout<<ans<<nl;
    return 0;
}
