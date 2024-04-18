class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
        int low = 0 , high = size - 1;
        int start = -1, end = -1 , mid;
        while(low <= high){
            mid = (low+high) / 2;
            if(nums[mid] == target){
                if(mid >= 1 and nums[mid-1] == target){
                    high = mid-1;
                }
                else{
                    start = mid;
                    break;
                }
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid-1;
            }
        }
        int lowagain = 0 , highagain = size - 1;

        while(lowagain <= highagain){
            mid = (lowagain+highagain) / 2;
            if(nums[mid] == target){
                if(mid < size-1 and nums[mid+1] == target){
                    lowagain = mid + 1;
                }
                else{
                    end = mid;
                    break;
                }
            }
            else if(nums[mid] < target){
                lowagain = mid + 1;
            }
            else{
                highagain = mid-1;
            }
        }
        return {start,end};
    }
};
