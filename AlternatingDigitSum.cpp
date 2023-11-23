class Solution {
public:
    int alternateDigitSum(int n) {
        int len = 0;
        int iter = 1;
        int sum = 0;
        while(n){
            len++;
            int mod = n % 10;
            if(iter % 2){
                sum -= mod;
            }
            else
            sum += mod;
            n /= 10;
            iter++;
        }
        if(len % 2){
            return -1*sum;
        }
        return sum;
    }
};
