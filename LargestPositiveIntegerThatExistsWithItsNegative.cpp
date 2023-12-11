class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>um;
        for(auto i : nums){
            um[i] = 1;
        }
        int m = -1;
        for(auto i : nums){
            if(i > 0){
                if(um.find(-i) != um.end()){
                    m = max(m , i);
                }
            }
        }
        return m;
    }
};
