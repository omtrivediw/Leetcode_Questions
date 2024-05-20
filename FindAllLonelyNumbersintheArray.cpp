class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>umap;
        for(auto i : nums) umap[i]++;
        for(int i : nums){
            if(umap[i] == 1){
                if(umap.find(i - 1) == umap.end() and umap.find(i + 1) == umap.end()){
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};
