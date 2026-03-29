
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

void solve1(){
    int n;cin >> n;
    deque<int> a(n);
    for(int &x: a)
        cin >> x;
 
    int ans = 1;
    set<int> prev;
    prev.insert(a[0]);
    a.pop_front();
    while(a.size()){
        set<int> next;
        while(prev.size() && a.size()){
            prev.erase(a.front());
            next.insert(a.front());
            a.pop_front();
        }
        if(prev.size())
            break;
        prev = next;
        ans++;
    }
    cout << ans << "\n";
}
void solve(){
    int n;cin>>n;
    vll a(n);fr(n)cin>>a[i];
    set<int>s1,s2;
    s1.insert(a[0]);
    int ans=0;
    for(int i=1;i<n;i++){            //O(nlogn)
        auto it=s1.find(a[i]);
        if(it!=s1.end())           
        s1.erase(s1.find(a[i]));
        s2.insert(a[i]);
        if(s1.empty()){
            ans++;
            s1=s2;
            s2.clear();
        }
      //  frg(x,s1)cout<<x<<' ';nf;
        
    }
   cout<<ans+1<<nl;
    
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}