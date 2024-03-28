class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int,int>umap;
        for(auto i : nums){
            umap[i]++;
        }
        if(size == 1) return nums[0]+1;
        int sum = nums[0];
        for(int i = 1 ; i < size ; i++){
            if(nums[i] == (nums[i-1] + 1)){
                sum += nums[i];
            }
            else break;
        }
        while(true){
            if(umap.find(sum) == umap.end()){
                return sum;
            }
            else{
                sum++;
            }
        }
        return 0;
    }
};
