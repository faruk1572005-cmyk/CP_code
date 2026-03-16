
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
    string s;cin>>s;
    string a="",b="";
    int i=0;
    bool g=false,ss=false,d=false,m=false;
    
    for(;i<s.size() ;i++){
        if(s[i]=='+'){
            g=true;
            break;
        } else if(s[i]=='-'){
            ss=true;
            break;
        }else if(s[i]=='*'){
            m=true;
            break;
        }
        else if(s[i]=='/'){
            d=true;
            break;
        }
        a+=s[i];
    }
    for(i++;i<s.size() ;i++)b+=s[i];
    int x,y;
    x=(int)stoi(a);
    y=(int)stoi(b);
    if(g){
        cout<<x+y;
        return;
    }
     if(ss){
        cout<<x-y;
        return;
    }
    if(m){
        cout<<x*y;
        return;
    }if(d){
        cout<<x/y;
        return;
    }
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}