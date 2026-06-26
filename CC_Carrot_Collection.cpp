#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>> n >> l >> r;
        
        vector<int> a(n+1);

        for(int i=1; i<=n; i++){
            cin>> a[i];
        }
        
        long long left_sum =0; 
        long long right_sum =0;
        for(int i=1;i<l;i++) 
            left_sum+=a[i];
            
        for(int i=r+1;i<=n;i++) 
            right_sum+=a[i];
        cout<< max(left_sum,right_sum)<<"\n";    
    }
}
