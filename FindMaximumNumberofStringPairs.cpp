class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string , string>word;
        int count = 0;
        for(string i : words){
            string rev = reverse(i);
            if(i != rev)
            word[i] = rev;
        }
        for(auto key : word){
            if(word.find(key.second) != word.end())
            count++;
        }
        return count / 2;
    }
private:
    string reverse(string s){
        int first = 0;
        int last = s.length() - 1;
        while(first <= last){
            swap(s[first] , s[last]);
            first++;
            last--;
        }
        return s;
    }
};
