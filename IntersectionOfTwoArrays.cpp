class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        int forfirst[1000] = {0};
        int forsecond[1000] = {0};
        for(int i = 0 ; i < nums1.size() ; i++){
            forfirst[nums1[i]]++;
        }
        for(int i = 0 ; i < nums2.size() ; i++){
            forsecond[nums2[i]]++;
        }
        for(int i = 0 ; i < 1000 ; i++){
            if(forfirst[i] > 0 and forsecond[i] > 0){
                result.push_back(i);
            }
        }
        return result;
    }
};
