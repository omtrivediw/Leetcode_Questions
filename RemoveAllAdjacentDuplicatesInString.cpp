class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string result = "";
        for(int i = 0 ; i < s.length() ; i++){
            if(!st.empty() and s[i] == st.top()){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
        char topper = st.top();
        result += topper;
        st.pop();
        }
        reverse(result.begin() , result.end());
        return result;
    }
};
