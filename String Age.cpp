/*    


███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗
██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝
█████╗  ███████║██████╔╝██║   ██║█████╔╝ 
██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗ 
██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗
╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝

*/


#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf cout<<endl
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define fr(N)for(ll i=0;i<N;i++)
#define all(x) (x).begin(), (x).end()
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define vll vector<long long>
#define vi vector<int>
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,c=0;cin>>t;
    while( t--){
        string s,r;cin>>s>>r;
        sort(all(s));sort(all(r));
        reverse(all(s));reverse(all(r));
        cout<<"Data set #"<<++c<<": ";
        if(s==r) cout<<"Both are the same age\n\n";
        else
        for(int i=0; i<s.size()||i<r.size(); i++){
            if(s[i]>r[i]){
                cout<<"S1 is older\n\n";
                break;
            }
            if(s[i]<r[i]){
                cout<<"S1 is younger\n\n";
                break;
            }
        }
    }
    return 0;
}