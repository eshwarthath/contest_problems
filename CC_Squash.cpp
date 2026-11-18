
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        string S;
        cin >> S;

        int groups = 1;

        for (int i = 1; i < N; i++) {
            if (S[i] != S[i - 1]) {
                groups++;
            }
        }

        if (K >= groups && K <= N) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
