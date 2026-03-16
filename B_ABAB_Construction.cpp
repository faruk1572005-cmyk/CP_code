
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
    deque<char> t;
    for(int i=1 ;i<=n ;i++){
        if(i%2==0)t.push_back('b');
        else t.push_back('a');
    }
    // cout<<t[1]<<nl;
    string s;cin>>s;
    reverse(all(s));
    while(!t.empty()){
        char x=s.back();
        if(x=='?'){
            if(t.front()==t.back()) t.pop_back();
            else{
                char y=s[s.size()-2];
                if(y==t.front())t.pop_back();
                else if(y==t.back())t.pop_front();
                else t.pop_back();
            }
        }
        else if(x==t.front())t.pop_front();
        else if(x==t.back())t.pop_back();
        else{
            cn;
            return;
        }
        s.pop_back();
        // cout<<s<<nl;
        // frg(ch,t)cout<<ch;nf;
    }
    cy;
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}

