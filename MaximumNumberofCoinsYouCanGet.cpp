class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int count = 0;
        int fptr = 0, lptr = piles.size() - 1;
        sort(piles.begin() , piles.end());
        while(lptr > fptr){
            count += piles[lptr - 1];
            fptr++;
            lptr -= 2;
        }
        return count;
    }
};
