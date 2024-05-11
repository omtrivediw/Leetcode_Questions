class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int count = 0;
        int size = intervals.size();
        for(int i = 0 ; i < size; i++){
            for(int j = 0 ; j < size ; j++){
                if(i != j){
                    if(intervals[i][0] >= intervals[j][0] and intervals[i][1] <= intervals[j][1]){
                        count++;
                        break;
                    }
                }
            }
        }
        return size - count;
    }
};
