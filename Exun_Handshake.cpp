#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        long long M;
        cin >> N >> M;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        sort(A.begin(), A.end());

        long long people = 0;
        int count = 0;

        for (int i = 0; i < N; i++) {
            long long newPeople = people + A[i];
            long long handshakes = newPeople * (newPeople - 1) / 2;

            if (handshakes <= M) {
                people = newPeople;
                count++;
            } else {
                break;
            }
        }

        cout << count << '\n';
    }

    return 0;
}
