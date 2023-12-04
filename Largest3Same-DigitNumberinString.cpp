class Solution {
public:
    string largestGoodInteger(string num) {
        string temp = "";
        int p1 = 0, p2 = 1, p3 = 2, integer;
        int m = -1;
        while(p3 <= num.length() - 1){
            if(num[p1] == num[p2] and num[p1] == num[p3] and num[p2] == num[p3]){
                temp += num[p1];
                temp += num[p2];
                temp += num[p3];
                integer = stoi(temp);
                m = max(m , integer);
                temp.clear();
            }
            p1++;
            p2++;
            p3++;
        }
        if(m < 0){
            return "";
        }
        else if(m == 0){
            return "000";
        }
        return to_string(m);
    }
};
