class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int forransom[26] = {0};
        int formagazine[26] = {0};
        for(int i = 0 ; i < ransomNote.length() ; i++){
            forransom[(int)ransomNote[i] - 97]++;
        }
        for(int i = 0 ; i < magazine.length() ; i++){
            formagazine[(int)magazine[i] - 97]++;
        }
        for(int i = 0 ; i < 26 ; i++){
            if(forransom[i] != 0){
                if(forransom[i] > formagazine[i])
                return false;
            }
        }
        return true;
    }
};
