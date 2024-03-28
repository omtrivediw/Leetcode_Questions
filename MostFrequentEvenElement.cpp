class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>umap;
        int freq = INT_MIN;
        bool flag = false;
        for(auto i : nums){
            if(i % 2 == 0){
            flag = true;
            umap[i]++;
            freq = max(freq,umap[i]);
            }
        }
        if(!flag)return -1;
        int res = INT_MAX;
        for(auto key : umap){
            if(key.second == freq){
                res = min(key.first , res);
            }
        }
        return res;
    }
};
