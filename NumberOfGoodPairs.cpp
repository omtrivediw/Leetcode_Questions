//1512
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        //O(n^2) O(1)
        int count = 0;
        for(int i = 0 ; i < nums.size() - 1 ; i++){
            for(int j = i + 1 ; j < nums.size() ; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
        }
        return count;

        //O (n) O (n)
        int freq[101] = {0};
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            freq[nums[i]]++;
        }
        for(auto i : freq){
            if(i > 1){
                count += (((i-1)*i)/2);
            }
        }
        return count;
    }
};
