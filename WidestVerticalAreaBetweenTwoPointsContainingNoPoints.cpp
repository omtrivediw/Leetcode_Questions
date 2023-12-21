class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        //Time - O(nlogn) , Space - O(n)
        int ans = INT_MIN;
        vector<int>temp;
        int n = points.size();
        for(int i = 0 ; i < n ; i++){
            temp.push_back(points[i][0]);
        }
        sort(temp.begin() , temp.end());
        for(int j = 0 ; j < n-1 ; j++){
            ans = max(ans , abs(temp[j] - temp[j+1]));
        }
        return ans;
    }
};
