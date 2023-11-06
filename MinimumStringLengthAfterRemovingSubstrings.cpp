class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        for(int i = 0; i < s.length() ; i++){
            if((!st.empty()) and ((st.top() == 'A' and s[i] == 'B') or (st.top() == 'C' and s[i] == 'D'))){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        int count = 0;
        while(!st.empty()){
            st.pop();
            count++;
        }
        return count;
    }
};
