class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.length();
        for(int i = n-1 ; i >= 0 ; i--){
            if(s[i] == ' ' and count > 0){
                return count;
            }
            else if(s[i] != ' ')
            count++;
        }
        return count;
    }
};
