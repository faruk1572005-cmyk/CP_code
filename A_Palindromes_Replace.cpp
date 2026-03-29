
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

void solve() {
    string s;
    cin >> s;

    int l = 0, r = s.size() - 1;

    while (l <= r) {

        if (s[l] == s[r]) {
            if (s[l] == '?') {
                s[l] = s[r] = 'a';
            }
        }

        else if (s[l] == '?') {
            s[l] = s[r];
        }

        else if (s[r] == '?') {
            s[r] = s[l];
        }

        else {
            cout << -1 << '\n';
            return;
        }

        l++;
        r--;
    }

    cout << s << '\n';
}
int32_t main() {
    fastio;
    int t=1;
    while(t--)solve();
    return 0;
}