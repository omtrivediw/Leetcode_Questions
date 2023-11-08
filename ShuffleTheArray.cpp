class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>answer;
        int ptr1= 0;
        int ptr2 = n;
        while(ptr2 <= (2*n) - 1 and ptr1 <= n-1){
            answer.push_back(nums[ptr1]);
            answer.push_back(nums[ptr2]);
            ptr1++;
            ptr2++;
        }
        return answer;
    }
};
