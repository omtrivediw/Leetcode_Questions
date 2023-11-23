class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string res = "";
        int oc = 0 , zc = 0;
        for(char i : s){
            if(i == '1') oc++;
            else zc++;
        }
        while(oc-1){
            res += "1";
            oc--;
        }
        while(zc){
            res+="0";
            zc--;
        }
        res += "1";
        return res;
    }
};
