
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int score = 0;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            score++;
        }
    }

    int bestLeft = 0;
    int ans = 0;

    for (int r = 0; r < n; r++) {

        int left = 0, right = 0;

        // Calculate left boundary gain
        if (r > 0) {
            if (a[r - 1] == a[r])
                left = -1;
            else if (a[r - 1] == a[r] + 1)
                left = 1;
        }

        // Keep maximum left gain for L <= R
        bestLeft = max(bestLeft, left);

        // Calculate right boundary gain
        if (r < n - 1) {
            if (a[r] == a[r + 1])
                right = -1;
            else if (a[r] + 1 == a[r + 1])
                right = 1;
        }

        ans = max(ans, bestLeft + right);
    }

    cout << score + ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
