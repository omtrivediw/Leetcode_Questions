class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int total = n*2;
        unordered_map<int,int>umap;
        for(int i = 1 ; i <= n ; i++){
            umap[i] = total;
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(umap.find(matrix[i][j]) == umap.end()){
                    return false;
                }
                else{
                    if(umap[matrix[i][j]] == total){
                        umap[matrix[i][j]]--;
                    }
                    else{
                        return false;
                    }
                }
                
            }
            total--;
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(umap.find(matrix[j][i]) == umap.end()){
                    return false;
                }
                else{
                    if(umap[matrix[j][i]] == total){
                        umap[matrix[j][i]]--;
                    }
                    else{
                        return false;
                    }
                }
            }
            total--;
        }
        return true;
    }
};
