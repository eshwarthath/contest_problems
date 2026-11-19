
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[105];
        int total = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            total += A[i];
        }

        int mini = INT_MAX;

        for (int i = 0; i < N - 1; i++) {
            mini = min(mini, A[i] + A[i + 1]);
        }

        int ans = total - mini / 2;

        cout << ans << endl;
    }

    return 0;
}
