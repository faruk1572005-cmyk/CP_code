
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
    int n;cin>>n;
    vll a(n);fr(n)cin>>a[i];
    sort(all(a));
    map<int,int>m;
    fr(n){                              
        if(m[a[i]-1])m[a[i]-1]--;
        m[a[i]]++;
    }
    int ans=0;
    frg(x,m)ans+=x.second;
    cout<<ans<<nl;
}
void solve2(){
    int n;cin>>n;
    vll a(n);fr(n)cin>>a[i];
    map<int ,int>m;
    fr(n){
        int val;cin>>val;
        m[val]++;     
    }
    auto it=m.begin();
    int lest=it->first;
    int lestcnt=it->second;
    int ans=lestcnt;
    for(it++;it!=m.end() ;it++){    
        if(it->first!=(lest+1)) ans+=it->second;
        else ans+=max((int)0,(it->second-lestcnt));
        lest=it->first;
        lestcnt=it->second;
    }
    cout<<ans<<nl;
}
void solve(){
    int n;cin>>n;
    vll a(n);fr(n)cin>>a[i];           // O(n)
    map<int,int>mp;
    frg(x,a)mp[x]++;                  // O(nlogn)
    int cnt=0,prenum=0,ans=0;
    frg(x,mp){                        // O(nlogn)
        if(prenum==x.first){
            if(cnt<x.second){
                ans+=x.second-cnt;
            }  
        }else{
            ans+=x.second;
        }
        prenum=x.first+1;
        cnt=x.second;
    }
    cout<<ans<<nl;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;          
    while(t--)solve();
    return 0;
}                               //overall O(nlogn)