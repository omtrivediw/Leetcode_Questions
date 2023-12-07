class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0 ; i < nums.size() ; i++){
            int location = abs(nums[i]) - 1;
            if(nums[location] > 0)
            nums[location] = 0 - nums[location];        
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > 0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
