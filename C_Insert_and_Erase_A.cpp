
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
    string s,t; 
    cin>>t>>s;

    string ns="", nt="";
    for(char c:s) if(c!='A') ns+=c;
    for(char c:t) if(c!='A') nt+=c;

    if(ns!=nt){
        cout<<-1<<nl;
        return;
    }

    int i=s.size()-1;
    int j=t.size()-1;
    int cnt=0;

    while(i>=0 && j>=0){
        if(s[i]==t[j]){
            i--; j--;
        }
        else if(s[i]=='A'){
            i--; cnt++;
        }
        else if(t[j]=='A'){
            j--; cnt++;
        }
        else{
            cout<<-1<<nl;
            return;
        }
    }

    cnt += (i+1) + (j+1);

    cout<<cnt<<nl;
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}