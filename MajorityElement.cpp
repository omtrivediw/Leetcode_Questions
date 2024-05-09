class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>umap;
        for(auto i : nums){
            umap[i]++;
        }
        int freq = floor(nums.size() / 2);
        for(auto key : umap){
            if(key.second > freq){
                return key.first;
            }
        }
        return 0;
    }
};
