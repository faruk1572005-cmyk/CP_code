#include <bits/stdc++.h>

using namespace std;

void Do(vector<int> &a) {
	vector<int> b = a;
	sort(b.begin(), b.end());
	int mex = 0;
	int n = a.size();
	vector<int> f(n + 1);
	for (int i = 0; i < n; i++) {
		if (b[i] == mex) {
			mex++;
		}
		++f[b[i]];
	}
	for (int i = 0; i < n; i++) {
		if (f[a[i]] > 1 || a[i] > mex) {
			a[i] = mex;
		}
	}
}

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	if (k == 1) {
		Do(a);
	} else if (k % 2 == 0) {
		for (int i = 0; i < 2; i++) {
			Do(a);
		}
	} else {
		for (int i = 0; i < 3; i++) {
			Do(a);
		}
	}
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	cout << sum << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}