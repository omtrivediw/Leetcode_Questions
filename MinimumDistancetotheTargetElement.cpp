class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
    int mini = INT_MAX;
    int s = nums.size();
    for(int i = 0 ; i < s ; i++){
        if(nums[i] == target)
        mini = min(abs(start - i), mini);
    }
    return mini;
    }
};
