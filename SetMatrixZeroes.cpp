class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int>row,column;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    column[j] = 1;
                }
            }
        }
        for(auto key : row){
            for(int i = 0 ; i < n ; i++){
                matrix[key.first][i] = 0;
            }
        }
        for(auto key : column){
            for(int i = 0 ; i < m ; i++){
                matrix[i][key.first] = 0;
            }
        }
    }
};
