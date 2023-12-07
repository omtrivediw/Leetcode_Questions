class Solution {
public:
    int countSegments(string s) {
        int ans = 0;
        if(s.length() == 0) return 0;
        for(int i = 1 ; i < s.length() ; i++){
            if(s[i] == ' ' && s[i-1] != ' ')
            ans++;
        }
        return s[s.length()-1] == ' ' ? ans : ans + 1;
    }
};
