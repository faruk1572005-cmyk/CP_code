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
        int n,k;cin>>n>>k;
        vector<ll> a(n);
        for(int i=0 ;i<n; i++)cin>>a[i];
        for(int i=0 ;i<n ; i++){
            if(a[i]>=k) a[i]%=k;
            else a[i]=k;
        }
        int x=a[0];
        for(int i=0 ; i<n ; i++){
            if(x>a[i])x=a[i];
        }
        if(x==k) cout<<"-1"<<nl;
        else cout<<x<<nl;
    }
    return 0;
}