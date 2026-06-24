#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>> n >> k;
        
        int player =1;
        while(player+k<=n){
            player = player+k;
        }
        cout<<player<<endl;
        
    }
}
