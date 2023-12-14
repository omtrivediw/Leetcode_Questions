class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i < arr.size() ; i++){
            if(mp.find(arr[i]) == mp.end()){
                mp[arr[i]] = 1;
            }
            else{
                mp[arr[i]]++;
            }
        }
        int m = -1;
        for(auto key : mp){
            if(key.first == key.second){
                m = max(m , key.first);
            }
        }
        return m;
    }
};
