class Solution {
public:
    int getLucky(string s, int k) {
        string temp = "";
        for(char i : s){
            temp += to_string((int)i -  96);
        }
        string res;
        cout << temp;
        while(k){
            res = change(temp);
            temp = res;
            k--;
        }
        int ans = stoi(res);
        return ans;
    }
private:
    string change(string temp){
        int sum = 0;
        for(char i : temp){
            sum+= ((int)i - 48);
        }
        return to_string(sum);
    }
};
