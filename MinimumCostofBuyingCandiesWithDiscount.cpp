class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size() == 1) return cost[0];
        int count = 0;
        sort(cost.begin() , cost.end());
        for(int i = cost.size() - 1 ; i > 0 ; i--){
            count += (cost[i] + cost[i-1]);
            i -= 2;
        }
        return cost.size() % 3 == 1 ? count + cost[0] : count;
    }
};
