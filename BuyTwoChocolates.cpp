class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int size = prices.size();
        pair<int,int>small = smallest(prices,size);
        int element = small.first;
        int index = small.second;
        int sum = 1000;
        for(int i = 0 ; i < size ; i++){
            if(i != index){
                sum = min(sum , element + prices[i]);
            }
        }
        if(sum > money) return money;
        return money - sum;
    }
private:
    pair<int,int> smallest(vector<int>& vec , int n){
        int first = INT_MAX;
        int second;
        for(int i = 0 ; i < n ; i++){
            if(vec[i] < first){
                first = vec[i];
                second = i;
            }
        }
        return {first , second};
    }
};
