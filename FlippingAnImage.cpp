class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0 ; i < image.size() ; i++){
            reverse(image[i]);
        }
        for(int i = 0 ; i < image.size() ; i++){
            for(int j = 0 ; j < image[i].size() ; j++){
                if(image[i][j] == 0)
                image[i][j] = 1;
                else
                image[i][j] = 0;
            }
        }
        return image;
    }
private:
    void reverse(vector<int>&arr){
        int start = 0;
        int end = arr.size() - 1;
        while(start <= end){
            swap(arr[start] , arr[end]);
            start++;
            end--;
        }
    }
};
