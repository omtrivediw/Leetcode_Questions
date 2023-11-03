class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for(int i = 0 ; i < word.size() ; i++){
            if(isCapital(word[i])){
                count++;
            }
        }
        return (isCapital(word[0]) and count == 1) or count == 0 or count == word.size();
    }
private:
    bool isCapital(char c){
        return (int)c <= 90;
    }
};
