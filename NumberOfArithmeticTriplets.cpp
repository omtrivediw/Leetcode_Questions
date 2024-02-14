class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,int> umap;
        for(auto i : nums){
            if(umap.find(i) == umap.end()){
                umap[i] = 1;
            }
        }
        int count = 0;
        for(auto i : nums){
            if(umap.find(i + diff) != umap.end()){
                if(umap.find(i + diff + diff) != umap.end()){
                    count++;
                }
            }
        }
        return count;
    }
};
