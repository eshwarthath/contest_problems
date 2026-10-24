#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> P(N);
        for (int i = 0; i < N; i++) {
            cin >> P[i];
        }

        if (K == 1) {
            bool sorted = true;

            for (int i = 0; i < N; i++) {
                if (P[i] != N - i) {
                    sorted = false;
                    break;
                }
            }

            cout << (sorted ? 0 : -1) << '\n';
            continue;
        }

        vector<int> bit(N + 1, 0);

        auto update = [&](int i) {
            while (i <= N) {
                bit[i]++;
                i += i & -i;
            }
        };

        auto query = [&](int i) {
            int count = 0;
            while (i > 0) {
                count += bit[i];
                i -= i & -i;
            }
            return count;
        };

        long long ans = 0;

        for (int i = 0; i < N; i++) {
            int smaller = query(P[i] - 1);

            ans += (smaller + K - 2) / (K - 1);

            update(P[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}
