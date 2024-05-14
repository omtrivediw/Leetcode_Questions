class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high = *max_element(nums.begin() , nums.end());
        int low = 1;
        int mid , result;
        int ans = INT_MAX;
        while(low <= high){
            mid = (low + high) / 2;
            result = findResult(nums , mid);
            if(result > threshold){
                low = mid + 1;
            }
            else{
                ans = min(ans , mid);
                high = mid - 1;
            }
        }
        return ans;
    }
private:
    int findResult(vector<int>& nums , int find){
        int sum = 0;
        for(auto i : nums){
            if(i % find == 0) sum += (i / find);
            else{
                sum += ((i / find) + 1);
            }
        }
        return sum;
    }
};
