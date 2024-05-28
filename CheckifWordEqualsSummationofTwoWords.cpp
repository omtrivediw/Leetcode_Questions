class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string first = "", second = "", target = "";
        for(auto i : firstWord){
            first += to_string((int)i - 97);
        }
        for(auto i : secondWord){
            second += to_string((int)i - 97);
        }
        for(auto i : targetWord){
            target += to_string((int)i - 97);
        }
        return stoi(first) + stoi(second) == stoi(target);
    }
};
