class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int,int>umap;
        for(int i : nums){
            if(umap.find(i) == umap.end()){
                umap[i] = 1;
            }
            else{
                umap[i]++;
            }
        }
        int pairs = 0;
        int temp;
        for(auto key : umap){
            temp = key.second;
            if(temp >= 2){
                pairs += (temp / 2);
            }
        }
        return {pairs , size - (pairs*2)};
    }
};
