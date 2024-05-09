class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int,int>umap;
        for(auto i : nums) umap[i]++;
        for(auto i : umap){
            if(i.first < k)
            count += i.second;
        }
        return count;
    }
};
