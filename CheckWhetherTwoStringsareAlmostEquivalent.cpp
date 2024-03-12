class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int first[26] = {0} , second[26] = {0};
        int one = word1.length() , two = word2.length();
        for(int i = 0, j = 0 ; i < one or j < two ; i++,j++){
            first[(int)word1[i] - 97]++;
            second[(int)word2[i] - 97]++;
        }
        for(int i = 0 ; i < one ; i++){
            int temp1 = first[(int)word1[i] - 97];
            int temp2 = second[(int)word1[i] - 97];
            if(abs(temp1 - temp2) > 3)return false;
        }
        for(int i = 0 ; i < two ; i++){
            int temp1 = first[(int)word2[i] - 97];
            int temp2 = second[(int)word2[i] - 97];
            if(abs(temp1 - temp2) > 3)return false;
        }
        return true;
    }
};
