class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
    vector<int>vec;
    for(int i = 1 ; i < mountain.size()-1 ; i++){
        if(mountain[i] > mountain[i-1] and mountain[i] > mountain[i+1]){
            vec.push_back(i);
        }
    }
    return vec;   
    }
};
