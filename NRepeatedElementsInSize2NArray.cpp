class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>umap;
        for(auto i : nums){
            if(umap.find(i) == umap.end()){
                umap[i] = 1;
            }
            else{
                umap[i]++;
            }
        }
        for(auto key : umap){
            if(key.second > 1){
                return key.first;
            }
        }
        return 0;
    }
};
