class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>answer;
        for(int i = left ; i <= right ; i++){
            if(isdividing(i)){
                answer.push_back(i);
            }
        }
        return answer;
    }
private:
    bool isdividing(int num){
        int temp = num, mod;
        while(temp != 0){
            mod = temp % 10;
            if(mod == 0) return false;
            else if(num % mod != 0) return false;
            temp /= 10;
        }
        return true;
    }
};
