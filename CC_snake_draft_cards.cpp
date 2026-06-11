#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    while(T--){
        int N, K;
        cin >> N >> K;
        
        // deck[i] = total strength of player i , this is list which stores 0 for N+1 indexes like list in python
        vector<int> deck(N + 1, 0);
        
        int card = K;  // Start from strongest card
        bool going_forward = true;
        
        while(card >= 1){
            if(going_forward){
                // Players 1, 2, 3, ..., N
                for(int player = 1; player <= N; player++){
                    if(card >= 1){
                        deck[player] += card;
                        card--;
                    }
                }
            } else {
                // Players N, N-1, ..., 1
                for(int player = N; player >= 1; player--){
                    if(card >= 1){
                        deck[player] += card;
                        card--;
                    }
                }
            }
            // Flip direction after each round
            going_forward = !going_forward;
        }
        
        // Find maximum deck strength and we use star to print actual value not the address
        int ans = *max_element(deck.begin() + 1, deck.end());
        cout << ans << "\n";
    }
    
    return 0;
}
