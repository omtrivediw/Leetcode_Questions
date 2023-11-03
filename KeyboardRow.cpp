class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>temp;
        for(int i = 0 ; i < words.size() ; i++){
            if(firstrow(words[i]) or secondrow(words[i]) or thirdrow(words[i]))
            temp.push_back(words[i]);
        }
        return temp;
    }
private:
    bool firstrow(string s){
        int count = 0;
        transform(s.begin() , s.end(), s.begin(), ::tolower);
        string first = "qwertyuiop";
        for(int i = 0 ; i < s.length() ; i++){
            for(int j = 0 ; j < first.length() ; j++){
                if(s[i] == first[j]){
                count++;
                break;
                }
            }
        }
        return count == s.length();
    }
    bool secondrow(string s){
        int count = 0;
        transform(s.begin() , s.end(), s.begin(), ::tolower);
        string first = "asdfghjkl";
        for(int i = 0 ; i < s.length() ; i++){
            for(int j = 0 ; j < first.length() ; j++){
                if(s[i] == first[j]){
                count++;
                break;
                }
            }
        }
        return count == s.length();
    }
    bool thirdrow(string s){
        int count = 0;
        transform(s.begin() , s.end(), s.begin(), ::tolower);
        string first = "zxcvbnm";
        for(int i = 0 ; i < s.length() ; i++){
            for(int j = 0 ; j < first.length() ; j++){
                if(s[i] == first[j]){
                count++;
                break;
                }
            }
        }
        return count == s.length();
    }
};
