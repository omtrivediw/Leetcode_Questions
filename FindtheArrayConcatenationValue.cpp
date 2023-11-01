class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        if(nums.size() % 2 != 0)
        ans += nums[nums.size() / 2];
        int first = 0;
        int last = nums.size() - 1;
        while(first < last){
            if(nums[last] < 10)
            ans += (nums[first] * 10 + nums[last]);
            else if(nums[last] < 100)
            ans += (nums[first] * 100 + nums[last]);
            else if(nums[last] < 1000)
            ans += (nums[first] * 1000 + nums[last]);
            else if(nums[last] < 10000)
            ans += (nums[first] * 10000 + nums[last]);
            else if(nums[last] == 10000)
            ans += (nums[first] * 100000 + nums[last]);
            first++;
            last--;
        }
        return ans;
    }
};
