class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int res = 0;
        for(int x=1; x<= n+k ; x++){
            int a = abs(n-x);
            if(a <= k){
                int b = n & x;
                if(b==0){
                    res += x;
                }
            }
        }
        return res;
        
        
    }
};
