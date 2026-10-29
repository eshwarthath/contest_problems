#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        int count = 0, ans = 0;
        char prev = ' ';

        for (int i = 0; i < N; i++) {
            if (S[i] == prev) {
                count++;
            } else {
                prev = S[i];
                count = 1;
            }

            if (count == 3) {
                ans++;
                count = 0;
                prev = ' ';
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
