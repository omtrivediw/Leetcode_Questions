class Solution {
public:
    string reversePrefix(string word, char ch) {
        int first = 0;
        int last = -1;
        for(int i = 0 ; i < word.length() ; i++){
            if(word[i] == ch){
            last = i;
            break;}
        }
        if(last == -1) return word;
        while(first <= last){
            swap(word[first] , word[last]);
            first++;
            last--;
        }
        return word;
    }
};
