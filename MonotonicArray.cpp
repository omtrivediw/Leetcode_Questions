//896

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i] < nums[i+1])
            {
                for(int j = i ; j < nums.size()-1 ; j++){
                    if(nums[j] > nums[j+1])
                    return false;
                }
                return true;
            }
            else if(nums[i] > nums[i+1])
            {
                for(int j = i ; j < nums.size()-1 ; j++){
                    if(nums[j] < nums[j+1])
                    return false;
                }
                return true;
            }
        }
        return true;
    }
};
