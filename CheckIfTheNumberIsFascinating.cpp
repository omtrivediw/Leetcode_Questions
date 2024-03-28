class Solution {
public:
    bool isFascinating(int n) {
        string first = to_string(2*n);
        string second = to_string(3*n);
        string temp = to_string(n) + first + second;
        unordered_map<int, int>umap;
        for(auto i : temp){
            umap[(int)i - 48]++;
            if(i == '0') return false;
        }
        // for(auto i : umap){
        //     cout << i.first << ":" << i.second;
        //     cout << endl;
        // }
        int num = 9;
        while(num){
            if(umap.find(num) == umap.end() or umap[num] > 1){
                return false;
            }
            num--;
        }
        return true;

    }
};
