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
 
    int n;
    cin >> n;

    vll A(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    ll reach = 1;
    for (ll i = 1; i <= n; i++) {
        if (i > reach) break;
        reach = max(reach, i + A[i] - 1);
    }
    cout << min(reach, (ll)n) << "\n";

    return 0;
}