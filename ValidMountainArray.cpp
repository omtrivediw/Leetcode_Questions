class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int size = arr.size();
        if(size < 3) return false;
        int i = 0;
        while(arr[i+1]>arr[i]){
            i++;
        }
        if(i == size - 1 or i == 0) return false;
        while(i < size - 1){
            if(arr[i+1] >= arr[i]){
                return false;
            }
            i++;
        }
        return true;
    }
};
