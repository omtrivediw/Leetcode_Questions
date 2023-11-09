class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximum = INT_MIN,  sum;
        for(int i = 0 ; i < accounts.size() ; i++){
            sum = findSum(accounts[i]);
            maximum = max(maximum,sum);
        }
        return maximum;
    }
private:
    int findSum(vector<int>vec){
        int sum = 0;
        for(auto i : vec)
        sum+=i;
        return sum;
    }
};
