class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int size = arr.size();
        int unique = 0;
        unordered_map<int,int>umap;
        for(auto i : arr){
            if(umap.find(i) == umap.end()){
                umap[i] = 1;
            }
            else{
                umap[i]++;
            }
        }
        vector<int>temp;
        for(auto key : umap){
            unique++;
            temp.push_back(key.second);
        }
        sort(temp.begin() , temp.end());
        for(int i = 0 ; i < unique ; i++){
            if(temp[i] <= k){
                k -= temp[i];
            }
            else{
                return unique - i;
            }
        }
        return 0;

    }
};
