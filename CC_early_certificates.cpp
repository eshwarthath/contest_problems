#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin>> T;
    while(T--){
        int N,M;
        cin>> N >> M;
        
        string A;
        string B;
        
        string C ="";
        
        cin >> A;
        cin >> B;
        
        for(int i=0; i< min(N,M); i++){
            if(A[i] == B[i]){
                C.push_back(A[i]);
                
            }
            else{
                break;
            }
        }
        cout<<C<<endl;
    }
    return 0;
}      
