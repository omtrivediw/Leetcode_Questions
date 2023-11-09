class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int answer = 0;
        for(int i = 0 ; i < sentences.size() ; i++){
            int sentSize = lengthOf(sentences[i]);
            answer = max(answer , sentSize);
        }
        return answer;
    }
private:
    int lengthOf(string s){
        int count = 0;
        for(int i  = 0 ; i < s.length() ; i++){
            if(s[i] == ' '){
                count++;
            }
        }
        return ++count;
    }
};
