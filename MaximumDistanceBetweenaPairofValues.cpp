class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int s1 = nums1.size();
        int s2 = nums2.size();
        int ans = INT_MIN;
        for(int i = 0 ; i < s1 ; i++){
            int res = binarysearch(nums1[i], i, nums2,s2-1);
            ans = max(ans , res);
        }
        return ans;
    }
private:
    int binarysearch(int target, int low , vector<int>& arr, int high){
        int init = low;
        int mid;
        while(low <= high){
            mid = (low + high)/ 2;
            if(arr[mid] >= target){
                if(mid < high and arr[mid+1] >= target){
                    low = mid + 1;
                }
                else{
                    return mid - init;
                }
            }
            else if(arr[mid] < target){
                high = mid - 1;
            }
        }
        return 0;
    }
};
