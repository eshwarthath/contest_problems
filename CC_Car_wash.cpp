
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m;
    int k;
    cin >> n >> m >> k;

    vector<pair<long long, long long>> a(k);

    for (int i = 0; i < k; i++) {
        cin >> a[i].first >> a[i].second;
    }

    // Sort by X, then Y
    sort(a.begin(), a.end());

    // Find Longest Non-Decreasing Subsequence
    vector<long long> lis;

    for (auto &p : a) {
        long long y = p.second;

        auto it = upper_bound(lis.begin(), lis.end(), y);

        if (it == lis.end()) {
            lis.push_back(y);
        } else {
            *it = y;
        }
    }

    cout << n + m - 1 + lis.size() << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
