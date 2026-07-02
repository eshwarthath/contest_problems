#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        long long total = 0;
        for (int k = x; k > y; k--) {
            total += (k + 9) / 10; // ceil(k/10)
        }
        cout << total << "\n";
    }
    return 0;
}
