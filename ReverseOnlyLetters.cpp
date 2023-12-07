class Solution {
public:
    string reverseOnlyLetters(string s) {
        int first = 0 , last = s.length() - 1;
        while(first <= last){
            if(isletter(s[first]) && isletter(s[last])){
                swap(s[first] , s[last]);
                first++;
                last--;
            }
            else if(isletter(s[first])){
                last--;
            }
            else
            first++;
        }
        return s;
    }
private:
    bool isletter(char c){
        if(((int)c >= 65 and (int)c <= 90) or ((int)c >= 97 and (int)c <= 122)){
            return true;
        }
        return false;
    }
};
