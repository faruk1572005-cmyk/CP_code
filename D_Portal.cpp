
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

void solv(){
    int n,x,y;cin>>n>>x>>y;
    vll a(n);fr(n)cin>>a[i];
    vll md;
    for(int i=x ;i<y ;i++){
        md.push_back(a[i]);
    }
    vll fs;
    for(int i=0 ;i<x ;i++){
        fs.push_back(a[i]);
    }
    for(int i=y ;i<n ;i++){
        fs.push_back(a[i]);
    }
    auto it=min_element(all(md));
    rotate(md.begin(),it,md.end());
    
   if(fs.empty()){
    frg(v,md)cout<<v<<' ';nf;
    return;
   }
    int k=0;
    vll ans;
    for( ;k<fs.size() ;k++){
        if(fs[k]<md[0])ans.push_back(fs[k]);
        else{
            frg(v,md)ans.push_back(v);
            break;
        }
    }
    for(;k<fs.size();k++)ans.push_back(fs[k]);
    frg(v,ans)cout<<v<<' ';nf;
    // frg(v,md)cout<<v<<' ';nf;
    // frg(v,fs)cout<<v<<' ';nf;
}
void solve() {
    int n, x, y;cin >> n >> x >> y;
    
    vll p(n);fr(n)cin>>p[i];
    
    auto min =min_element(p.begin() + x, p.begin() + y);
    rotate(p.begin() + x, min, p.begin() + y);
    
    vll a(p.begin() + x, p.begin() + y);
    vll b(p.begin(), p.begin() + x);
    b.insert(b.end(), p.begin() + y, p.end());
    int i = 0;
    while (i < b.size() && b[i] < a[0]) {
        i++;
    }
    b.insert(b.begin() + i, a.begin(), a.end());
    
    for (int i = 0; i < n; i++) {
        cout << b[i] << " \n"[i == n - 1];
    }
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}