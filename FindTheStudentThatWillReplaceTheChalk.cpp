class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int s = chalk.size();
        long long sum = 0;
        for(auto i : chalk) sum += i;
        int finsum = k % sum;
        long long temp = 0;
        for(int i = 0 ; i < s ; i++){
            temp += chalk[i];
            if(temp > finsum){
                return i;
            }
        }
        return 0;
    }
};
