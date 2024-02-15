class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>ans;
        int size = s.length();
        int front = 0 , rear = size;
        int ptr = 0;
        while(ptr < size){
            if(s[ptr] == 'I'){
                ans.push_back(front);
                front++;
            }
            else{
                ans.push_back(rear);
                rear--;
            }
            ptr++;
        }
        if(s[size - 1] == 'D') ans.push_back(rear);
        else ans.push_back(front);
        return ans;

    }
};
