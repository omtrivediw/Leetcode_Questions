class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i = nums.size() - 1 ; i >= 0 ; i--){
            vector<int>sep = separate(nums[i]);
            for(int j : sep){
                ans.push_back(j);
            }
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
private:
    vector<int> separate(int num){
        vector<int>sep;
        while(num != 0){
            sep.push_back(num % 10);
            num /= 10;
        }
        return sep;
    }
};
