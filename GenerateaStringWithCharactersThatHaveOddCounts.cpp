class Solution {
public:
    string generateTheString(int n) {
        if(n == 1) return "a";
        string res = "";
        if(n % 2 == 0){
            while(n >= 2){
                res += 'a';
                n--;
            }
            res += 'b';
        }
        else{
            while(n >= 3){
                res += 'a';
                n--;
            }
            res+="bc";
        }
        return res;
    }
};
