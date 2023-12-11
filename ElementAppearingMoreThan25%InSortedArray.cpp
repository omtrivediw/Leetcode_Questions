class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        if(arr.size() == 1) return arr[0];
        int fourth = arr.size() / 4;
        int freq = 1;
        for(int i = 0 ; i < arr.size()-1 ; i++){
            int temp = arr[i];
            int j = i + 1;
            while(j < arr.size() && arr[j] == temp){
                freq++;
                j++;
            }
            if(freq > fourth){
                return temp;
            }
            freq = 1;
        }
        return 0;
    }
};
