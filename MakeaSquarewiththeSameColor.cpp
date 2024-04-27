class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        int sum1 = temp(grid[0][0]) + temp(grid[0][1]) + temp(grid[1][0]) + temp(grid[1][1]);
        int sum2 = temp(grid[0][1]) + temp(grid[0][2]) + temp(grid[1][1]) + temp(grid[1][2]);
        int sum3 = temp(grid[1][0]) + temp(grid[1][1]) + temp(grid[2][0]) + temp(grid[2][1]);
        int sum4 = temp(grid[1][1]) + temp(grid[1][2]) + temp(grid[2][1]) + temp(grid[2][2]);
        if(sum1 != 2 or sum2 != 2 or sum3 != 2 or sum4 != 2){
            return true;
        }
        return false;
    }
private:
    int temp(char c){
        if(c == 'B') return 0;
        return 1;
    }
};
