class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans(2);
        unordered_map<int,int>first,second;
        for(auto i : nums1){
            if(first.find(i) == first.end()){
                first[i] = 1;
            }
            else{
                first[i]++;
            }
        }
        for(auto i : nums2){
            if(second.find(i) == second.end()){
                second[i] = 1;
            }
            else{
                second[i]++;
            }
        }
        for(auto i : first){
            if(second.find(i.first) == second.end()){
                ans[0].push_back(i.first);
            }
        }
        for(auto i : second){
            if(first.find(i.first) == first.end()){
                ans[1].push_back(i.first);
            }
        }
        return ans;
    }
};
