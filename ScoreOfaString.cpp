class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        int len = s.length();
        for(int i = 0 ; i < len-1 ; i++){
            score += (abs((int)s[i] - (int)s[i+1]));
        }
        return score;
    }
};
