#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        string s;

        cin >> n;
        cin >> s;
        cin >> m;

        for (int i = 0; i < n && m > 0; i++) {
            int cost = (26 - (s[i] - 'a')) % 26;
            if (cost <= m) {
                m -= cost;
                s[i] = 'a';
            }
        }

        if (m > 0) {
            int add = m % 26;
            s[n - 1] = char((s[n - 1] - 'a' + add) % 26 + 'a');
        }

        cout << s << "\n";
    }
    return 0;
}
