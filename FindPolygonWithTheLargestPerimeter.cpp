class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int size = nums.size();
        long long sum = summation(nums,size);
        for(int i = size - 1; i >= 0 ; i--){
            sum -= nums[i];
            if(sum > nums[i]){
                return sum + nums[i];
            }
        }
        return -1;
    }
private:
    long long summation(vector<int>& nums, int size){
        long long count = 0;
        for(auto i : nums){
            count += i;
        }
        return count;
    }
};
