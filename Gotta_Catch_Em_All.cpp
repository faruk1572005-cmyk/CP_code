/*    
   ________________________
   |                      |
   |   Md.Faruk Hossian   |
   |______________________|

*/


#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf cout<<endl
#define ll long long
#define pb push_back
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define vll vector<long long>
#define vi vector<int>
 
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin>>t;
    while(t--){
        int ans=0;
        int n,x,y;cin>>n>>x>>y;
        for(int i=0 ;i<n ; i++){
            int a; cin>>a;
            (a*x>=y)? ans+=y:ans+=a*x;
        }
        cout<<ans<<nl;
    }
    return 0;
}