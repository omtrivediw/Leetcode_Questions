class Solution {
public:
    int arrangeCoins(int n) {
        int temp = 1;
        int count = 0;
        while(n >= 0){
            n -= temp;
            temp++;
            if(n >= 0)
            count++;
        }
        return count;
    }
};
