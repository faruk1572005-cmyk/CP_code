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
 
void solv(){
     int t;cin>>t;
    int n=t/4;
    (n*4)==t?cout<<n<<nl:cout<<n+1<<nl;
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
   int t;cin>>t;
   while (t--)solv();
    return 0;
}