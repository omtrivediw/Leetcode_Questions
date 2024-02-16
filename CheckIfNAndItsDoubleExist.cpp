class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>umap;
        int size = arr.size();
        for(int i = 0 ; i < size ; i++){
            umap[arr[i]] = i;
        }
        for(int i = 0 ; i < size;  i++){
            if(umap.find(arr[i]*2) != umap.end() and umap[arr[i]*2] != i){
                return true;
            }
        }
        return false;
    }
};
