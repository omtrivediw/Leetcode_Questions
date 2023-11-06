class Solution {
public:
    string makeGood(string s) {
        stack<char>string_stack;
        string result = "";
        for(int i = 0 ; i < s.length() ; i++){
            if(!string_stack.empty()){
            char topper = string_stack.top();
            if(((int)topper - 32 == (int)s[i]) or ((int)topper + 32 == (int)s[i])){
                string_stack.pop();
            }
            else{
                string_stack.push(s[i]);
            }
            }
            else{
                string_stack.push(s[i]);
            }
        }
        while(!string_stack.empty()){
            char top = string_stack.top();
            result+=top;
            string_stack.pop();
        }
        reverse(result.begin() , result.end());
        return result;
    }
};
