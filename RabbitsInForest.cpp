class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int count = 0;
        unordered_map<int,int>umap;
        for(auto i : answers) umap[i + 1]++;
        for(auto i : umap){
            if(i.second % i.first == 0)
            count += i.second;
            else if(i.second > i.first){
            count += ((i.second / i.first)*(i.first));
            count += i.first;
            }
            else
            count += i.first;
        }
        return count;
    }
};
