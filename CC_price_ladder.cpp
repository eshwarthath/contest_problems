
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        ll N;
        cin >> N;

        ll low = 1, high = 2000000;
        ll ans = 1;

        while (low <= high) {
            ll mid = low + (high - low) / 2;
            ll sum = mid * (mid * mid + 5) / 6;

            if (sum <= N) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
