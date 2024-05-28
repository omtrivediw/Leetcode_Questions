class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int size = words.size();
        int arr[26] = {0};
        for(auto i : words){
            for(auto j : i){
                arr[(int)j - 97]++;
            }
        }
        for(int i : arr){
            if(i != 0){
                if(i % size != 0) return false;
            }
        }
        return true;
    }
};
