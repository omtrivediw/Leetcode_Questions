class Solution {
public:
    string toLowerCase(string s) {
        int n = s.length();
        for(int i = 0 ; i < n ; i++){
            if((int)s[i] >= 65 and (int)s[i] <= 90){
                s[i] = (char)(int)s[i] + 32;
            }
        }
        return s;
    }
};
