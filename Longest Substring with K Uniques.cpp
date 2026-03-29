
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
int longestKSubstr(string s, int k) {
        int n=s.size();
        int mx=-1;
        map<char,int>t;
        int l=0,r=0,ans=0,cnt=0;
        while(r<n){
            t[s[r]]++;
            if(t.size()==k){
                mx=max(r-l+1,mx);
            }
            while(t.size()>k){
                t[s[l]]--;
                if(t[s[l]] == 0)
                   t.erase(s[l]);
                l++;
            }
            r++;
        }
        
        return mx;
        
    }
void solve(){
    string s;cin>>s;
    int k;cin>>k;
    cout<<longestKSubstr(s,k);
    
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}