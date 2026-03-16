
/*    


       ████████████████████████████████████████████████████
       ██               Md.Faruk Hossain                 ██
       ██    ███████╗ █████╗ ██████╗ ██╗   ██╗██╗  ██╗   ██
       ██    ██╔════╝██╔══██╗██╔══██╗██║   ██║██║ ██╔╝   ██
       ██    █████╗  ███████║██████╔╝██║   ██║█████╔╝    ██
       ██    ██╔══╝  ██╔══██║██╔══██╗██║   ██║██╔═██╗    ██
       ██    ██║     ██║  ██║██║  ██║╚██████╔╝██║  ██╗   ██
       ██    ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ██
       ████████████████████████████████████████████████████

*/


#include <bits/stdc++.h>
using namespace std;
 
#define nl "\n"
#define nf cout<<"\n"
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define fr(N)for(int i=0;i<N;i++)
#define frg(x,a) for(auto x:a)
#define vll vector<long long>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define fastio ios_base::sync_with_stdio(0);cout.tie(nullptr);cin.tie(nullptr)

bool check (const string &s) {
  int bal = 0;
  for (char c : s) {
    if (c == '(') {
      bal++;
    } else {
      bal--;
    }
    if (bal < 0) {
      return false;
    }
  }
  return bal == 0;
}
 
void solve () {
  int n;
  cin >> n;
 
  string s;
  cin >> s;
 
  int c1 = 0;
  for (char c : s) {
    if (c == '1') {
      c1++;
    }
  }
 
  if (c1 % 2 == 1) {
    cn;
    return;
  }
 
  int ol = c1 / 2;
  bool turn = false;
  string a, b;
  for (char c : s) {
    if (c == '1') {
      if (ol > 0) {
        a.push_back('(');
        b.push_back('(');
        ol--;
      } else {
        a.push_back(')');
        b.push_back(')');
      }
    } else {
      if (turn) {
        a.push_back('(');
        b.push_back(')');
      } else {
        a.push_back(')');
        b.push_back('(');
      }
      turn = !turn;
    }
  }
 
  if (check(a) && check(b)) {
    cy;
    cout << a << '\n';
    cout << b << '\n';
  } else {
    cn;
  }
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}