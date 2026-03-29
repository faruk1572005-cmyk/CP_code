
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
    int a,b,c,m;cin>>a>>b>>c>>m;
    vll sa,sb,sc;
    map<int,int>ab,ac,bc;
    for(int i=a,j=2;i<=m ;i=a*j,j++){
        sa.push_back(i);
    }
    for(int i=b,j=2;i<=m ;i=b*j,j++){
        sb.push_back(i);
    }
    for(int i=c,j=2;i<=m ;i=c*j,j++){
        sc.push_back(i);
    }
    // frg(x,sa)cout<<x<<" ";nf;
    // frg(x,sb)cout<<x<<" ";nf;
    // frg(x,sc)cout<<x<<" ";nf;  
    frg(x,sa)ab[x]++;
    frg(x,sb)ab[x]++;
    frg(x,sa)ac[x]++;
    frg(x,sc)ac[x]++;
    frg(x,sb)bc[x]++;
    frg(x,sc)bc[x]++;
    int ansa=1,ansb=1,ansc=1;
    frg(x,sa){
        if(bc.count(x)==1) ansa+=3;
        else if(bc.count(x)==2) ansa+=2;
        else ansa+=6;
    }
    frg(x,sb){
        if(ac.count(x)==1) ansb+=3;
        else if(ac.count(x)==2) ansb+=2;
        else ansb+=6;
    }
    frg(x,sc){
        if(ab.count(x)==1) ansc+=3;
        else if(ab.count(x)==2) ansc+=2;
        else ansc+=6;
    }
    cout<<ansa<<" "<<ansb<<" "<<ansc<<nl;


}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}