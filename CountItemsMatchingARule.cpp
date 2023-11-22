class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int num;
        int count = 0;
        if(ruleKey == "type") num = 0;
        else if(ruleKey == "color") num = 1;
        else num = 2;
        for(int i = 0 ; i < items.size() ; i++){
            if(items[i][num] == ruleValue) count++;
        }
        return count;
    }
};
