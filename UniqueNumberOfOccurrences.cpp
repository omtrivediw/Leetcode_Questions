class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>first,second;
        for(auto i : arr){
            if(first.find(i) == first.end()){
                first[i] = 1;
            }
            else{
                first[i]++;
            }
        }
        for(auto key : first){
            if(second.find(key.second) == second.end()){
                second[key.second] = 1;
            }
            else{
                second[key.second]++;
            }
        }
        for(auto key : second){
            if(key.second > 1){
                return false;
            }
        }
        return true;
    }
};
