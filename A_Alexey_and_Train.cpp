
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
    int n, cur = 0;
    cin >> n;
    int q = n;
    vll a, b;
    while(q --){
        int x, y;
        cin >> x >> y;
        a.push_back(x); b.push_back(y);
    }
    vll v(n);
    for(int i = 0; i < n; i ++){
        cin >> v[i];
    }
    for(int i = 0; i < v.size(); i ++){
            if(i == 0){
                cur = cur + (a[i] - 0) + v[i];
            }
            else
                cur = cur + (a[i] - b[i-1]) + v[i];
                if(i != n - 1){
                    int staytime = (b[i] - a[i] + 1) / 2;
                    cur = max(cur + staytime, b[i]);
                }
    }
    cout << cur <<nl;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}