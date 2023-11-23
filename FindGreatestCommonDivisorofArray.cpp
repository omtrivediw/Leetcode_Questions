class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxof = *max_element(nums.begin() , nums.end());
        int minof = *min_element(nums.begin() , nums.end());
        return gcd(maxof, minof);
    }
private:
    int gcd(int a , int b){
        int small = min(a,b);
        while(small != 0){
            if(a % small == 0 and b % small == 0){
                return small;
            }
            small--;
        }
        return small;
    }
};
