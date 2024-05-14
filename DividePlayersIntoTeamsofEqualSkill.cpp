class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long prod = 0;
        unordered_map<int,int>umap;
        int sum = 0;
        for(auto i : skill){
            umap[i]++;
            sum+=i;
        }
        sum = sum / (skill.size() / 2);
        for(auto i : skill){
            int diff = sum - i;
            if(i == diff){
                if(umap[i] > 1){
                    prod += (i*diff);
                    umap[i]-=2;
                }
                else if(umap[i] == 1) return -1;
            }
            else{
                if(umap.find(diff) != umap.end()){
                    if(umap[diff] >= 1){
                        prod += (i*diff);
                        umap[i]--;
                        umap[diff]--;
                    }
                    else if(umap[i] >= 1 and umap[diff] == 0){
                        return -1;
                    }
                }
                else{
                    return -1;
                }
            }
        }
        cout << sum;
        return prod;
    }
};
