class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = nums.size();
        int low = 0 , high = s -1;
        int mid;
        if(high == 0) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[high] > nums[high-1]) return high;
        while(low <= high){
            mid = (low + high) / 2;
            if((mid > 0 )and nums[mid] > nums[mid-1]){
                if((mid < s - 1) and nums[mid] > nums[mid + 1]){
                    return mid;
                }
            }
            if(mid < s-1 and nums[mid] < nums[mid + 1]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return mid;
    }
};
