class Solution {
public:
    char repeatedCharacter(string s) {
        int arr[26] = {0};
        int l = s.length();
        for(int i = 0 ; i < l ; i++){
            arr[(int)s[i] - 97]++;
            if(arr[(int)s[i] - 97] == 2){
                return s[i];
            }
        }        
        return 'z';
    }
};
