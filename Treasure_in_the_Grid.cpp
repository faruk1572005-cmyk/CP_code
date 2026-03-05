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

    ll n,m,q; cin>>n>>m>>q;
    vector<vector<long long>>a(n,vector<long long>(m));
    fr(n){
        for(int j = 0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vector<vector<long long>> b(n,vector<long long>(m, 0));
    fr(n){
        for(int j=0;j<m;j++){
            b[i][j]=a[i][j];
            if(i>0)b[i][j]+=b[i-1][j];
            if(j>0)b[i][j]+= b[i][j-1];
            if(i>0 &&j>0)b[i][j]-=b[i-1][j-1];
        }
    }
    while(q--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        long long ans = b[x2][y2];
        if(x1> 0) ans-= b[x1-1][y2];
        if(y1 > 0)ans -= b[x2][y1-1];
        if(x1> 0&& y1> 0) ans+= b[x1-1][y1-1];
        cout << ans << nl;
    }
    return 0;
}
