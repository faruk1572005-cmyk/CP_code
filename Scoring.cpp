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
        int x,y;cin>>x>>y;
        for(int i=y,j=0 ; i>=0 ; i--,j++){
            if(i-j==x){
                cout<<i<<" "<<j<<nl;
                break;
            }
        }
    }
    return 0;
}