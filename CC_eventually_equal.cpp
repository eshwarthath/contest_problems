#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    while(T--) {
        long long A, B, C;
        cin >> A >> B >> C;
        
        // Case 1: Already equal
        if(A == B) {
            cout << 0 << "\n";
            continue;
        }
        
        // Try k increments, then 1 replacement move
        int moves = 0;
        while(gcd(A, C) != gcd(B, C)) {
            C++;        // increment move
            moves++;
        }
        moves++;        // +1 for the replacement move itself
        
        cout << moves << "\n";
    }
    
    return 0;
}
