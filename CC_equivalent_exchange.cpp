#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        vector<int> a(n);
        for(auto &x : a) scanf("%d", &x);
        
        long long sum = 0;
        long long minS = LLONG_MAX, maxS = LLONG_MIN;
        for(int i = 0; i < n; i++){
            sum += a[i];
            minS = min(minS, sum);
            maxS = max(maxS, sum);
        }
        
        long long lower = max(0LL, -minS);
        long long upper = k - max(0LL, maxS);
        
        if(lower <= upper && lower <= k && upper >= 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
