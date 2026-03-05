
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

#define fastio ios :: sync_with_stdio(false);cin.tie(0);cout.tie(0)

void solve(){
    string s;cin>>s;
   // cout<<s<<nl;
    int cnt=0;
    bool ok=false;
    for(int i=0 ;i<s.size();i++){
        if(islower(s[i+1]))ok=true;
        if(islower(s[i]))cnt++;;
    }
    if(1<cnt|| ok){
        cout<<s<<nl;
        return;
    }
    if(cnt==0){
        fr(s.size()){
            cout<<(char)tolower(s[i]);

        }
        return;

    }
    cout<<(char)toupper(s[0]);
    fr(s.size()-1){
        cout<<(char)tolower(s[i+1]);

    }nf;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}