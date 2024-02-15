class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int size = nums.size();
        int ptr1 = size - 1, ptr2 = size - 2, ptr3 = size - 3;
        while(ptr3 >= 0){
            if(nums[ptr2] + nums[ptr3] > nums[ptr1]){
                return nums[ptr2] + nums[ptr3] + nums[ptr1];
            }
            ptr1--;
            ptr2--;
            ptr3--;
        }
        return 0;
    }
};
