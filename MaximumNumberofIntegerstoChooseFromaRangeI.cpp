class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int count = 0;
        unordered_map<int,int>umap;
        for(int i : banned){
            umap[i]++;
        }
        for(int i = 1 ; i <= n ; i++){
            if(umap.find(i) == umap.end()){
                count++;
                maxSum -= i;
                if(maxSum < 0){
                    return --count;
                }
                else if(maxSum == 0){
                    return count;
                }
            }
        }
        return count;
    }
};
