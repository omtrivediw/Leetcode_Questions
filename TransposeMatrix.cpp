class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>ans;
        vector<int>temp;
        int j = 0;
        int size = matrix[0].size()-1;
        while(j <= size){
        for(int i = 0 ; i < matrix.size() ; i++){
            temp.push_back(matrix[i][j]);
        }
        j++;
        ans.push_back(temp);
        temp.clear();
        }
        return ans;
    }
};
