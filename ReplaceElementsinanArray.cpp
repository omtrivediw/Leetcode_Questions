class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>umap;
        int size = nums.size();
        for(int i = 0 ; i < size ; i++){
            umap[nums[i]] = i;
        }
        for(auto i : operations){
            nums[umap[i[0]]] = i[1];
            umap[i[1]] = umap[i[0]];
        }
        return nums;
    }
};
