class Solution {
public:
    string largestOddNumber(string num) {
        int end = num.length()-1;
        string ans = "";
        while(end >= 0){
            if((int)num[end] % 2 != 0){
                ans = num.substr(0 , end+1);
                break;
            }
            end--;
        }
        return ans;
    }
};
