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
        int n,d;cin>>n>>d;
        int k=0,l=0,ans=0;
        for(int i=0 ;i<n ; i++){
            int x;cin>>x;
            if(x<=d){
                k++;
                l=0;
                if(i!=0&&k==1)ans++;
            }else{
                k=0;l++;
                if(l==1)ans++;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}