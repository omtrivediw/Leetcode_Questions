class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int ans = INT_MAX;
        unordered_map<int,int>umap;
        int size = cards.size();
        for(int i = 0 ; i < size ; i++){
            if(umap.find(cards[i]) == umap.end()){
                umap[cards[i]] = i;
            }
            else{
                ans = min(ans , abs(umap[cards[i]] - i));
                umap[cards[i]] = i;
            }
        }
        if(ans == INT_MAX) return -1;
        return ans + 1;
    }
};
