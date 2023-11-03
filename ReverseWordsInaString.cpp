class Solution {
public:
    string reverseWords(string s) {
        //O(n) time and O(n) space
        string temp = "";
        string answer = "";
        vector<string> vec_str;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] != ' '){
                while(s[i] != ' ' and i < s.length()){
                    temp+=s[i];
                    i++;
                }
                vec_str.push_back(temp);
                temp.clear();
            }
        }
        for(int i = vec_str.size() - 1 ; i >= 0 ; i--){
            answer+=vec_str[i];
            if(i != 0)
            answer+= " ";
        }
        return answer;
    }
};
