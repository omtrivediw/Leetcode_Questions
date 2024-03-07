class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
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
            if(key.second == 1){
                sum += key.first;
            }
        }
        return sum;
    }
};
