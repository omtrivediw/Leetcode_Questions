class Solution {
public:
    int maxDepth(string s) {
        // stack<char>st;
        int answer = 0;
        int count = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '('){
                count++;
            }
            else if(s[i] == ')'){
                if(count != 0)
                answer = max(answer , count);
                count--;
            }
        }
        return answer;
    }
};
