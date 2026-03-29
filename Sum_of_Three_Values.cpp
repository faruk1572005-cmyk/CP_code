
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
    int n,k;cin>>n>>k;
    vector<pair<int,int>>a(n);
    fr(n){
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(all(a));
    for(int i=0;i<n-2;i++){
        int l=i+1,r=n-1,sum=0;
        while(l<r){
            int sum=a[i].first+a[l].first+a[r].first;
            if(sum==k){
                cout<<a[i].second<<' '<<a[l].second<<' '<<a[r].second<<nl;
                return ;
            }
            if(sum>k)r--;
            else l++;
        }
    }
    cout<<"IMPOSSIBLE\n";

}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}