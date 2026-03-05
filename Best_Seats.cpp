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
        int n;cin>>n;
        vi a(n);
        for(int i=0 ;i<n; i++)cin>>a[i];
        int x=INT_MAX;
        for(int i=1;i<n; i++){
            
            if(x>(a[i-1]+a[i]))x=a[i-1]+a[i];
        }
        cout<<x<<nl;
    }
    return 0;
}