
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

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)

void solve(){

    int n;cin>>n;
    vll a;
    int nc=n;
    int mul=1;
    for(int i=2 ;i*i<=nc;i++){
        if(nc%i==0){
            a.push_back(i);
            mul*=i;
            nc=nc/i; 
        }
    }
    if(mul<n)a.push_back(nc);
    map<int,int>mp;
    frg(x,a)mp[x]++;
    if(mp.size()<3){
        cn;
        return;
    }cy;
    int c=1;
    cout<<a[0]<<' '<<a[1]<<' ';
    for(int i=2 ;i<a.size() ;i++){
        c*=a[i];
    }
    cout<<c<<nl;
//    frg(x,a)cout<<x<<' ';nf;

}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}