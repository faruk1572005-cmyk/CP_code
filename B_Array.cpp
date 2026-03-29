#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vector<int> ans(n, 0);

    for (int i = 0; i < n; ++i) {
        vector<ll> left, right; // store M = a[i] + a[j]
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[i]) left.push_back(a[i] + a[j]);
            else if (a[j] > a[i]) right.push_back(a[i] + a[j]);
        }
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
        int total_left = left.size();
        int total_right = right.size();

        // extremes: k → -∞ gives total_left, k → +∞ gives total_right
        int best = max(total_left, total_right);

        // if there are no values, answer is already 0
        if (total_left == 0 && total_right == 0) {
            ans[i] = 0;
            continue;
        }

        // collect all distinct M values
        vector<ll> all = left;
        all.insert(all.end(), right.begin(), right.end());
        sort(all.begin(), all.end());
        all.erase(unique(all.begin(), all.end()), all.end());

        // helper to compute f(K) = (# left M > K) + (# right M < K)
        auto compute = [&](ll K) -> int {
            int left_gt = total_left - (upper_bound(left.begin(), left.end(), K) - left.begin());
            int right_lt = lower_bound(right.begin(), right.end(), K) - right.begin();
            return left_gt + right_lt;
        };

        // candidates: each even M
        for (ll M : all) {
            if (M % 2 == 0) {
                best = max(best, compute(M));
            }
        }

        // candidates: gaps between consecutive distinct M
        for (size_t idx = 0; idx + 1 < all.size(); ++idx) {
            ll low = all[idx];
            ll high = all[idx + 1];
            // smallest even integer > low
            ll start = low + (low % 2 == 0 ? 2 : 1);
            if (start < high) {
                best = max(best, compute(start));
            }
        }

        ans[i] = best;
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " \n"[i == n - 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}