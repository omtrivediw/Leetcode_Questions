class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> city;
        int size = paths.size();
        for(int i = 0 ; i < size ; i++){
            city[paths[i][0]] = 1;
        }
        for(int i = 0 ; i < size ; i++){
            if(city.find(paths[i][1]) == city.end()){
                return paths[i][1];
            }
        }
        return "";
    }
};
