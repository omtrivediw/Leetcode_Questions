class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<string>temp;
        for(auto i : words){
            if(isEligible(licensePlate , i)){
                temp.push_back(i);
            }
        }
        int m = findMin(temp);
        for(auto i : temp){
            if(i.length() == m){
                return i;
            }
        }
        return "";
    }
private:
    bool isEligible(string s1 , string s2){
        int a1[26] = {0} , a2[26] = {0};
        int l1 = s1.length() , l2 = s2.length();
        for(int i = 0 ; i < l1 ; i++){
            if((int)s1[i] >= 97 and (int)s1[i] <= 122){
                a1[(int)s1[i] - 97]++;
            }
            else if((int)s1[i] >= 65 and (int)s1[i] <= 90){
                a1[(int)s1[i] - 65]++;
            }
        }
        for(int i = 0 ; i < l2 ; i++){
            a2[(int)s2[i] - 97]++;
        }
        for(int i = 0 ; i < 26 ; i++){
            if(a1[i] > 0){
                if(a1[i] > a2[i]){
                    return false;
                }
            }
        }
        return true;
    }

    int findMin(vector<string>& vec){
        int ans = INT_MAX;
        for(string i : vec){
            int l = i.length();
            ans = min(ans , l);
        }
        return ans;
    }
};
