
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
#define uint unsigned long long

#define cy cout << "YES\n"
#define cn cout << "NO\n"

#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)

#define vll vector<long long>
#define vec(v,n) vector<int> v(n)
#define get(v,n) vec(v,n);fr(i,n)cin >> v[i]

#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)


void solve(){
    string x;cin>>x;
    int sum=0;
    vll a;
    int d=(int)(x[0]-'0');
        sum+=d;
        a.push_back(d-1);

    fr(x.size()-1){
        d=(int)(x[i+1]-'0');
        sum+=d;
        a.push_back(d);
    }

    if(sum<10){
        cout<<0<<nl;
        return;
    }
    sort(rall(a));
    int ans=0;
    for(int i=0; i<a.size() ;i++){
        ans++;
        sum-=a[i];
       // cout<<i<<" ---> "<<sum<<' '<<a[i]<<nl;
        if(sum<10){
            cout<<ans<<nl;
            return;
        }
        

    }
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}