class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        vector<int>temp;
        for(int i = 0 ; i < n ; i++){
            int ones = number_of_ones(bank[i]);
            if(ones > 0)
            temp.push_back(ones);
        }
        int ans = 0;
        int tempsize = temp.size();
        if(tempsize == 1)return 0;
        else{
            for(int i = 0 ; i < tempsize-1 ; i++){
                int j = i + 1;
                ans += (temp[i]*temp[j]);
            }
        }
        return ans;
    }
private:
    int number_of_ones(string s){
        int ans = 0;
        for(char i : s){
            if(i == '1'){
                ans++;
            }
        }
        return ans;
    }
};
