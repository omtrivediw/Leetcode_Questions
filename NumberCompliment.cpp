class Solution {
public:
    int findComplement(int num) {
        string binary = "";
        while(num != 0){
            binary += to_string(num % 2);
            num /= 2;
        }
        for(auto i : binary){
            if(i == '1') i = '0';
            else i = '1';
        }
        int ans = 0;
        int len = binary.length();
        for(int i = 0 ; i < len ; i++){
            if(binary[i] == '0'){
                ans += pow(2, i);
            }
        }
        return ans;
    }
};
