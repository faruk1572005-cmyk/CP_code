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
 
    ll t;cin >>t;
    while(t--){
        string l,r;cin>>l>>r;
        ll ans=0, n=l.size();
        for(ll i=0 ;i<n; i++){
            if(l[i]==r[i]) ans+=2;
            else if(r[i]-l[i]>1)break;
            else{
                ans++;
                for(ll j=i+1 ;j<n ;j++){
                    if(l[j]=='9'&& r[j]=='0'){
                        ans++;
                    }else break;
                }
                break;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}