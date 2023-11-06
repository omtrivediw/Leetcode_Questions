class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> minopr;
        for(int i = 0 ; i < logs.size() ; i++){
            if(((int)logs[i][0] >= 97 and (int)logs[i][0] <= 122) or ((int)logs[i][0] >= 48 and (int)logs[i][0] <= 57)){
                minopr.push(logs[i]);
            }
            else if(logs[i] == "../" and !minopr.empty()){
                minopr.pop();
            }
        }
        int count = 0;
        while(!minopr.empty()){
            minopr.pop();
            count++;
        }
        return count;
    }
};
