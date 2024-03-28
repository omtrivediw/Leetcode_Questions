class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int first[10] = {0} , second[10] = {0};
        int f,s;
        int l1 = nums1.size() , l2 = nums2.size();
        for(int i = 0 ; i < l1 ; i++){
            first[nums1[i]]++;
        }
        for(int i = 0 ; i < l2 ; i++){
            second[nums2[i]]++;
        }
        for(int j = 0 ; j < 10 ; j++){
            if(first[j] != 0 and (first[j] == second[j])){
                return j;
            }
        }
        for(int j = 0 ; j < 10 ; j++){
            if(first[j]!= 0){
                f = j;
                break;
            }
        }
        for(int j = 0 ; j < 10 ; j++){
            if(second[j]!= 0){
                s = j;
                break;
            }
        }
        if(f < s)return (f*10)+s;
        else return (s*10)+f;
    }
};
