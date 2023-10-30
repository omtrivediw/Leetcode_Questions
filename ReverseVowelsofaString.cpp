class Solution {
public:
    string reverseVowels(string s) {
        int first = 0;
        int last = s.size() - 1;
        while(first <= last){
            if(isVowel(s[first]) && isVowel(s[last])){
            swap(s[first] , s[last]);
            first++;
            last--;
            }
            else if(isVowel(s[first]))
            last--;
            else
            first++;
        }
        return s;
    }
private:
    bool isVowel(char s){
        if(s == 'a' or s == 'e' or s == 'i' or s == 'o' or s == 'u' or s == 'A' or s == 'E' or s == 'I' or s == 'O' or s == 'U')
        return true;
        return false;
    }
};
