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
 
    ll t;cin>>t;
    while(t--){
        ll n,ans=0;cin>>n;
        vll a(n);
        fr(n)cin>>a[i];
       
        while(n>1){
            ll max=a[0],idx=0;
        for(int i=0 ;i<n-1;i++){
            if(a[i]>=max){
                max=a[i];
                idx=i;
            }
        }
         
        for(int i=n-1 ;i>=idx ;i--){
            if(max>a[i]) ans++;
            a.pop_back();
            n--;
        }

    }
    cout<<ans<<nl;
    }

    return 0;
}
