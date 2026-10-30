
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int ans = 0;
        int last = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1' && i > last) {
                ans++;

                last = min(n - 1, i + k);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
