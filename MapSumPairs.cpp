class MapSum {
public:
    unordered_map<string , int> umap;
    MapSum() {
        this -> umap = umap;
    }
    
    void insert(string key, int val) {
        umap[key] = val;
    }
    
    int sum(string prefix) {
        int len = prefix.length();
        int count = 0;
        for(auto key : umap){
            string temp = key.first.substr(0,len);
            if(temp == prefix){
                count += key.second;
            }
        }
        return count;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
