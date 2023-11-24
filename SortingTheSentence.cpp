class Solution {
public:
    string sortSentence(string s) {
        string res = "";
        vector<string>temp(9);
        string temp_str = "";
        for(char i : s){
            if((int)i >= 49 and (int)i <= 57){
                temp[(int)i - 49] = temp_str;
                temp_str.clear();
            }
            else if(i != ' ')
            temp_str += i;
        }
        for(int s = 0 ; s < temp.size()-1; s++){
            res += temp[s];
            if(temp[s+1].length() != 0){
                res += " ";
            }
            else{
                break;
            }
        }
        if(temp[8].length() != 0){
            res += temp[8];
        }
        return res;
    }
};
