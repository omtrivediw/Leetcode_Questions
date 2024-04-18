class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size()-1;
        int low = 0 , high = n;
        vector<int> result = getArray(matrix, target, m,n);
        int ressize = result.size();
        if(ressize == 0) return false;
        while(low <= high){
            int mid = (low+high)/2;
            if(result[mid] == target){
                return true;
            }
            else if(result[mid] > target){
                high = mid - 1;
            }
            else
            low = mid + 1;
        }
        return false;
        
    }
private:
    vector<int> getArray(vector<vector<int>> arr, int num, int m, int n){
        int low = 0 , high = m-1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(arr[mid][0] <= num and arr[mid][n] >= num){
                return arr[mid];
            }
            else if(arr[mid][0] > num){
                high = mid -1;
            }
            else {
                low = mid + 1;
            }
        }
        return {};
    }
};
