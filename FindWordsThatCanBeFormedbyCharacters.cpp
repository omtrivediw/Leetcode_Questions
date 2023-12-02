class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int answer = 0;
        for(int i = 0 ; i < words.size() ; i++){
            if(isGood(words[i], chars)){
                answer += words[i].length();
            }
        }
        return answer;
    }
private:
    bool isGood(string str, string charac){
        int arr[26] = {0};
        for(int i = 0 ; i < charac.length() ; i++){
            arr[(int)charac[i] - 97]++;
        }
        for(int j = 0 ; j < str.length() ; j++){
            if(arr[(int)str[j] - 97] == 0){
                return false;
            }
            else{
                arr[(int)str[j] - 97]--;
            }
        }
        return true;
    }
};
