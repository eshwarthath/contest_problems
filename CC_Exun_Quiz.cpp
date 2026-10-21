
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;

        int ans = INT_MAX;

        for (int c = 0; c <= N; c++) {
            int w = 4 * c - S;

            if (w >= 0 && c + w <= N) {
                ans = min(ans, c + w);
            }
        }

        if (ans == INT_MAX)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }

    return 0;
}
