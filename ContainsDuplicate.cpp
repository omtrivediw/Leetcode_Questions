//217
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // O(nlongn) O(1)
        
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i] == nums[i+1])
            return true;
        }
        return false;

        //O(n) O(n)

        unordered_map<int,int> mp;
        for(int i : nums)
        {
            mp[i]++;
        }
        for(auto j : mp){
            if(j.second > 1)
            return true;
        }
        return false;
    }
};
