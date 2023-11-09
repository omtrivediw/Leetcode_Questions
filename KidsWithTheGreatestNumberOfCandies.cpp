class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int maximum = findMax(candies);
        for(int i  = 0 ; i < candies.size() ; i++){
            if(extraCandies + candies[i] >= maximum)
            ans.push_back(true);
            else
            ans.push_back(false);
        }
        return ans;
    }
private:
    int findMax(vector<int>vec){
        int m = INT_MIN;
        for(auto i : vec)
        m = max(m , i);
        return m;
    }
};
