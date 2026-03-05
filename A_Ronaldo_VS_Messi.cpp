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
 
    int a,b,x,y;cin>>a>>b>>x>>y;
    if((a*2+b)>(x*2+y)) cout<<"Messi\n";
    else if((a*2+b)<(x*2+y)) cout<<"Ronaldo\n";
    else cout<<"Equal\n";
    return 0;
}