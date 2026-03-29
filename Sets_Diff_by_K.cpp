
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

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> s; // indices where B[i] = 1
    for (int i = 1; i <= n; ++i) {
        int b;
        cin >> b;
        if (b == 1) s.push_back(i);
    }

    // S must be non‑empty
    if (s.empty()) {
        cout << "No\n";
        return;
    }

    // Condition 1: pairwise distance > K
    for (size_t i = 1; i < s.size(); ++i) {
        if (s[i] - s[i - 1] <= k) {
            cout << "No\n";
            return;
        }
    }

    // Condition 2: every non‑S element is covered
    for (int x = 1; x <= n; ++x) {
        if (binary_search(s.begin(), s.end(), x)) continue; // it's in S
        bool covered = false;
        for (int t : s) {
            if (abs(x - t) <= k) {
                covered = true;
                break;
            }
        }
        if (!covered) {
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";
}
int32_t main() {
    fastio;
    int t=1;cin>>t;
    while(t--)solve();
    return 0;
}