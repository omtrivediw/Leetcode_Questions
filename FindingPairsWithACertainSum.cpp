class FindSumPairs {
public:
    vector<int>first,second;
    unordered_map<int,int>umap;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        // int s1=nums1.size(), s2 = nums2.size();
        for(int i : nums1){
            first.push_back(i);
        }
        for(int j : nums2){
            second.push_back(j);
        }
        for(auto i :  second){
            umap[i]++;
        }
    }
    
    void add(int index, int val) {
        umap[second[index]]--;
        second[index] += val;
        umap[second[index]]++;
    }
    
    int count(int tot) {
        int c = 0;
        for(int i :  first){
            if(umap.find(tot-i) != umap.end()){
                c += umap[tot-i];
            }
        }
        return c;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */
