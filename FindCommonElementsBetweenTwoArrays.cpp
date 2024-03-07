class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int count1 = 0 , count2 = 0;
        unordered_map<int, int>first , second;
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
        for(int i : nums1){
            if(second.find(i) != second.end()){
                count1++;
            }
        }
        for(int i : nums2){
            if(first.find(i) != first.end()){
                count2++;
            }
        }
        return {count1,count2};
    }
};
