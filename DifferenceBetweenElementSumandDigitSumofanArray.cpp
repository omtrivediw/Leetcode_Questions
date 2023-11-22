class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int arrsum = 0;
        int digsum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            arrsum += nums[i];
            digsum += digitsum(nums[i]);
        }
        return abs(arrsum - digsum);
    }
private:
    int digitsum(int num){
        int sum = 0; 
        while(num != 0){
            sum += num%10;
            num /= 10;
        }
        return sum;
    }
};
