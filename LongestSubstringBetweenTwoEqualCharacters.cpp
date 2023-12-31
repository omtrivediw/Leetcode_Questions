class Solution1 {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int length = -2;
        int temp;
        int n = s.length();
        for(int i = 0 ; i < n ; i++){
            for(int j = n-1 ; j >=0 ; j--){
                if(s[i] == s[j]){
                    temp = j - i - 1;
                    length = max(length , temp);
                    break;
                }
            }
        }
        return length == -2 ? -1 : length;
    }
};

class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s){
        unordered_map<char,int>unmp;
        int length = -2;
        int temp;
        int n = s.length();
        for(int i = 0 ; i < n ; i++){
            if(unmp.find(s[i]) == unmp.end()){
                unmp[s[i]] = i;
            }
            else{
                temp = i - unmp[s[i]] - 1;
                length = max(length , temp);
            }
        }
        return length == -2 ? -1 : length;
    }
};
