class Solution {
public:
    int secondHighest(string s) {
        int maximum = INT_MIN;
        int secmax = INT_MIN;
        int size = s.length();
        for(int i = 0 ; i < size ; i++){
            if((int)s[i] >= 48 and (int)s[i] <= 57){
                maximum = max(maximum , ((int)s[i]-48));
            }
        }
        for(int j = 0 ; j < size ; j++){
            if((int)s[j] >= 48 and (int)s[j] <= 57){
                if((int)s[j] != maximum + 48)
                secmax = max(secmax , ((int)s[j]-48));
            }
        }
        // cout<<(char)maximum << " " << secmax;
        if(secmax == INT_MIN) return -1;
        return secmax;

    }
};
