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
        int n,x;cin>>n>>x;
       double sum=0;
        for(int i=0 ;i<n ;i++){
            int a;cin>>a;
            sum+=a;
        }
        cout<<ceil(sum*1.0/x)<<nl;
    }
    return 0;
}