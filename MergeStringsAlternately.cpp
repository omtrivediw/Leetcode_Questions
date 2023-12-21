class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int first = 0 , second = 0;
        int len1 = word1.length(), len2 = word2.length();
        while(first < len1 or second < len2){
            if(first < len1){
                ans += word1[first];
                first++;
            }
            if(second < len2){
                ans += word2[second];
                second++;
            }
        }
        return ans;
    }
};
