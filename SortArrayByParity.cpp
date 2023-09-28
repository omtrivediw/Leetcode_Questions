//905
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        while(start <= end){
            if(nums[start] % 2 != 0 and nums[end] % 2 == 0)
            swap(nums[start] , nums[end]);
            else if(nums[start] % 2 != 0 and nums[end] % 2 != 0)
            end--;
            else if(nums[start] % 2 == 0 and nums[end] % 2 == 0)
            start++;
            else{
            start++;
            end--;}
        }
        return nums;
    }
};
