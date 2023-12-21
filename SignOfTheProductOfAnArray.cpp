class Solution {
public:
    int arraySign(vector<int>& nums) {
        int zero_count = 0 , neg_count = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0) zero_count++;
            else if(nums[i] < 0) neg_count++;
        }
        if(zero_count > 0) return 0;
        else if(neg_count % 2 != 0) return -1;
        return 1;
    }
};
