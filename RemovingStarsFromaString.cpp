class Solution {
public:
    string removeStars(string s) {
        stack<char>stars;
        string result = "";
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '*' and !stars.empty()){
                stars.pop();
            }
            else{
                stars.push(s[i]);
            }
        }
        while(!stars.empty()){
            char topper = stars.top();
            result += topper;
            stars.pop();
        }
        reverse(result.begin() , result.end());
        return result;
    }
};
