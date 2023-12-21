class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int first = 0 , second = 0;
        while(second < n){
            if(nums[second] != 0){
                nums[first] = nums[second];
                first++;
            }
            second++;
        }
        if(first < n - 1){
        while(first < n){
            nums[first] = 0;
            first++;
        }
        }
        else if(first < n){
            nums[first] = 0;
        }
        
    }
};
