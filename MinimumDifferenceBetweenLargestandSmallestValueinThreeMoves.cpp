class Solution {
public:
    int minDifference(vector<int>& nums) {
        int a,b,c,d;
        int size = nums.size();
        if(size <= 4) return 0;
        sort(nums.begin() , nums.end());
        a = abs(nums[3] - nums[size - 1]);
        b = abs(nums[0] - nums[size - 4]);
        c = abs(nums[1] - nums[size - 3]);
        d = abs(nums[2] - nums[size - 2]);
        return min({a,b,c,d});
    }
};
