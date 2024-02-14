class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int arr[26] = {0};
        int asize = allowed.length();
        int wsize = words.size();
        for(int i = 0 ; i < asize ; i++){
            arr[(int)allowed[i] - 97]++;
        }
        bool flag = true;
        int count = 0;
        for(int i = 0 ; i < wsize ; i++){
            flag = true;
            for(int j = 0 ; j < words[i].length() ; j++){
                if(arr[(int)words[i][j] - 97] == 0){
                    flag = false;
                    break;
                }
            }
            if(flag){
                count++;
            }
        }
        return count;
    }
};
