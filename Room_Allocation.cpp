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
 int solve(int x){
    int y=x/2;
    return (y*2==x)? y:y+1;
 }
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int sum=0;
        while(n--){
            int x;cin>>x;
            sum+=solve(x);
        }
        cout<<sum<<nl;
    }
    return 0;
}