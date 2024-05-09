class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n = nums.size();
       int freq = floor(n / 3);
       unordered_map<int,int>umap;
       for(auto i : nums){
            umap[i]++;
        }
        vector<int>ans;
        for(auto key : umap){
            if(key.second > freq){
                ans.push_back(key.first);
            }
        }
        return ans;
    }
};
