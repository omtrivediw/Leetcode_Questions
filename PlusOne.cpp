class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size() - 1] != 9)
        digits[digits.size() - 1]++;
        else{
            int i = digits.size() - 1;
            while(i >= 0 and digits[i] == 9){
                digits[i] = 0;
                i--;
                // digits[i]++;
            }
            if(i == -1){
                digits[0] = 1;
                digits.push_back(0);
                return digits;
            }
            digits[i]++;
        }
        return digits;
    }
};
