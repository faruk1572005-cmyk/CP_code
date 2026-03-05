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
 
    int t;cin>>t;
    while(t--){
        int n,x,y;cin>>n>>x>>y;
        int a=y/2;
        int ans=0;
        if(2*x<y){
            int k=n/2;
            ans=k*y+(x*(n%2));
        }
        else {
            ans=x*n;
        }
        cout<<ans<<nl;
    }
    return 0;
}