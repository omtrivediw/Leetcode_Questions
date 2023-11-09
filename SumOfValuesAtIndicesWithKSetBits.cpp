class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int count = 0, bits;
        for(int i = 0 ; i < nums.size() ; i++){
            bits = findSetBits(i);
            if(bits == k)
            count+=nums[i];
        }
        return count;
    }
private:
    int findSetBits(int num){
        int bitCount = 0;
        while(num!=0)
        {
            if(num & 1)
            bitCount++;
            num = num >> 1;
        }
        return bitCount;
    }
};
