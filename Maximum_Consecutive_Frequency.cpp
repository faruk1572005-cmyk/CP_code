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
    vll a(t);
    fr(t)cin>>a[i];
    ll max=1,idx=0;
    for(int i=0 ;i<t ;i++){
        ll c=1;
        for(int j=i+1 ;j<t ;j++){
            if(a[i]==a[j]){
                c++;
                if(c>max){
                    max=c;
                    idx=i;
                }
            }else break;
        }
    }
    cout<<a[idx]<<" "<<max<<nl;
    return 0;
}