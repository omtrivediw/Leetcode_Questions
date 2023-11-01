class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int first = 0, second = 0;
        // int small = min(nums1.size() , nums2.size());
        while(first < nums1.size() and second < nums2.size()){
            if(nums1[first] == nums2[second])
            return nums1[first];
            else if(nums1[first] < nums2[second])
            first++;
            else 
            second++;
        }
        return -1;
    }
};
