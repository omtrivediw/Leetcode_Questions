class Solution {
public:
    string firstPalindrome(vector<string>& words) {
    for(int i = 0 ; i < words.size() ; i++){
         if(isPalindrome(words[i]))
         return words[i];
    }   
    return "";
    }
private:
    bool isPalindrome(string s){
        int first = 0;
        int last = s.length() - 1;
        while(first <= last){
            if(s[first] != s[last])
            return false;
            first++;
            last--;
        }
        return true;
    }
};
