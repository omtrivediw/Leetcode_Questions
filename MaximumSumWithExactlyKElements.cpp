class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int m = *max_element(nums.begin() , nums.end());
        int sum = 0;
        while(k != 0){
            sum += m;
            m++;
            k--;
        }
        return sum;
    }
};
