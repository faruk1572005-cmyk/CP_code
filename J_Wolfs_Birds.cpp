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
        int n;
        string s;cin>>n>>s;
        int b=0,w=0;
        for(int i=0 ;i<n ;i++){
            if(s[i]=='1') w++;
            else{
                if(w==0)b++;
            }            
        }
        cout<<b<<nl;
    }
    return 0;
}