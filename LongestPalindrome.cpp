class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0;
        bool flag = false;
        int lower[26] = {0} , upper[26] = {0};
        for(int i = 0 ; i < s.length() ; i++){
            if((int)s[i] >= 97){
                lower[(int)s[i] - 97]++;
            }
            else{
                upper[(int)s[i] - 65]++;
            }
        }
        for(int i : lower){
            if(i % 2 == 0)ans += i;
            else{
                flag = true;
                ans += (i-1);
            }
        }
        for(int i : upper){
            if(i % 2 == 0)ans += i;
            else{
                flag = true;
                ans += (i-1);
            }
        }
        return flag ? ans+1 : ans;
    }
};
