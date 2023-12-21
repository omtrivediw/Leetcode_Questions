class Solution {
public:
    bool isAnagram(string s, string t) {
        int fors[26] = {0};
        int fort[26] = {0};
        int slen = s.length();
        int tlen = t.length();
        for(int i = 0 ; i < slen ; i++){
            fors[(int)s[i] - 97]++;
        }
        for(int i = 0 ; i < tlen ; i++){
            fort[(int)t[i] - 97]++;
        }
        for(int i = 0 ; i < 26 ; i++){
            if((fors[i] == 0 && fort[i] > 0) || (fors[i] > 0 && fort[i] != fors[i])){
                return false;
            }
        }
        return true;
    }
};
