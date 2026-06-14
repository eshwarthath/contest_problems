class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitsum =0;
        int squareSum = 0;
        while(n>0){
            int lastdigit = n%10;
            digitsum += lastdigit;
            int square = pow(lastdigit, 2);
            squareSum += square;
            n = n/10;
        }        
        int good = squareSum - digitsum;
        if(good>= 50){
            return true;
        }else{
            return false;
        }
        
    }
};
