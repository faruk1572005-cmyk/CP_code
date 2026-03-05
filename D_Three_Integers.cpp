/*    


████████████████████████████████████████████████████
██                                                ██
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
 
    int t;cin >> t;
	while(t--){
        int a,b,c;cin >> a >> b >> c;
        int ans=1e9, ansa,ansb,ansc;
        for(int i=2*a;i>=1;--i){
            if(abs(a-i)>=ans){
            continue;
        }
        for(int j=1;i*j<=2*c;++j){
            if(abs(a-i)+abs(b-i*j)>=ans){
                continue;
            }
            for(int k=1;(k-1)*i*j<=2*c;++k){
                int res=abs(a-i)+abs(b-i*j)+abs(c-i*j*k);
                if(ans>res){
                    ans=res;
                    ansa=i,ansb=i*j,ansc=i*j*k;
                }
            }
        }
    }
    cout << ans << "\n";
    cout << ansa << " " << ansb << " " << ansc << "\n";
}
		
	return 0;
} 