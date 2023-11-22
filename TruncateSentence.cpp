class Solution {
public:
    string truncateSentence(string s, int k) {
        string result = "";
        int i = 0;
        while(k > 0){
            if(s[i] == ' ' or i == s.length() - 1){
                k--;
                if(i == s.length() - 1)
                result += s[i];
                else if(k > 0)
                result += " ";
            }
            else{
            result += s[i];}
            i++;
            
        }
        return result;
    }
};
