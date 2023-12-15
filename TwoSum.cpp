class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>unmp;
        int diff;
        int size = nums.size();
        for(int i = 0 ; i < size ; i++){
            unmp[nums[i]] = i;
        }
        for(int i = 0 ; i < size ; i++){
            int diff = target - nums[i];
            if(unmp.find(diff) != unmp.end() and unmp[diff] != i){
                return {i, unmp[diff]};
            }
        }
        return {};
    }
};
