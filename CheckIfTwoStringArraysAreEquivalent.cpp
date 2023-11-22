class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string first = "";
        string second = "";
        for(string s : word1)
        first += s;
        for(string t : word2)
        second += t;
        return first == second;
    }
};
