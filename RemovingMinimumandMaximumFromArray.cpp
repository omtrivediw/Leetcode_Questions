class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int size = nums.size();
        if(size == 1) return 1;
        int mini = INT_MAX, maxi = INT_MIN;
        int minloc , maxloc;
        for(int i = 0 ; i < size ; i++){
            if(nums[i] < mini){
                mini = nums[i];
                minloc = i;
            }
            if(nums[i] > maxi){
                maxi = nums[i];
                maxloc = i;
            }
        }
        int minstart = minloc + 1;
        int minend = abs(size - minloc);
        int maxstart = maxloc + 1;
        int maxend = abs(size - maxloc);
        return min({max(minstart , maxstart) , max(minend , maxend) , (minstart + maxend) , (maxstart + minend)});
    }
};
