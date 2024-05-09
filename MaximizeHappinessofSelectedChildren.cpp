class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin() , happiness.end() , greater<int>());
        long long sum = 0;
        int size = happiness.size();
        for(int i = 0 ; i < size ; i++){
            if(k > 0){
                if(happiness[i] - i >= 0)
                happiness[i] -= i;
                else
                {
                    happiness[i] = 0;
                }
                sum += happiness[i];
                k--;
            }
        }
        return sum;
    }
};
