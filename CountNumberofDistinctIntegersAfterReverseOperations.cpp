class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int>umap;
        for(auto i : nums){
            umap[i]++;
            umap[reverse(i)]++;
        }
        int count = 0;
        for(auto i : umap){
            count++;
        }
        return count;
    }
private:
    int reverse(int num){
        int digits = 0;
        int temp = num;
        while(temp){
            temp/=10;
            digits++;
        }
        int rev = 0;
        --digits;
        while(num){
            rev += ((num%10) * pow(10,digits));
            digits--;
            num/=10;
        }
        return rev;
    }
};
