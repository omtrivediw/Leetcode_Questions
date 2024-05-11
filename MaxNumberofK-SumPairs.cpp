class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int,int>umap;
        for(auto i : nums) umap[i]++;
        int diff;
        for(auto i : nums){
            diff = k - i;
            if(i == diff){
                if(umap.find(i) != umap.end() and umap[i] >= 2){
                    count++;
                    umap[i] -= 2;
                }
            }
            else{
                if(umap.find(diff) != umap.end() and umap[i] >= 1 and umap[diff] >= 1){
                    count++;
                    umap[i]--;
                    umap[diff]--;
                }
            }
        }
        return count;
    }
};
