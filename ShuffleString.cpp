class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int maximum = *max_element(indices.begin() , indices.end());
        string final_string = "";
        vector<char>temp(maximum+1);
        for(int i = 0 ; i < s.length() ; i++){
            temp[indices[i]] = s[i];
        }
        for(auto i : temp){
            final_string += i;
        }
        return final_string;
    }
};
