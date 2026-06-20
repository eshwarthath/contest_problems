#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        long long total = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }
        long long base = total / 2;
        int count = 0;
        for(int i = 0; i < n; i++)
            for(int j = i+1; j < n; j++)
                if(base + a[i]/2 + a[j]/2 > k)
                    count++;
        cout << count << "\n";
    }
}
