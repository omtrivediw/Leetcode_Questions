class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        //O(n) Time, O(n) Space
        vector<int>negative;
        vector<int>solution;
        int size = nums.size();
        for(int i : nums){
            if(i < 0){
                negative.push_back(i);
            }
        }
        int i = 0 , j = 0;
        while(i < size or j < size / 2){
            if(nums[i] > 0){
                solution.push_back(nums[i]);
                solution.push_back(negative[j]);
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return solution;
    }
};
