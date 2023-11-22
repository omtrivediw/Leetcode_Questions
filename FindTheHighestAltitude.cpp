class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        for(int i = 1 ; i < gain.size() ; i++){
            gain[i] += gain[i-1];
        }
        int m = *max_element(gain.begin() , gain.end());
        return m < 0 ? 0 : m;
    }
};
