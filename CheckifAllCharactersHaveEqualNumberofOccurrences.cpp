class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>umap;
        int temp;
        for(auto i : s){
            if(umap.find(i) == umap.end()){
                umap[i] = 1;
            }
            else{
                umap[i]++;
            }
        }
        temp = umap[s[0]];
        for(auto key : umap){
            if(key.second != temp){
                return false;
            }
        }
        return true;
    }
};
