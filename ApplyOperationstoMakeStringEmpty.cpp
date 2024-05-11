class Solution {
public:
    string lastNonEmptyString(string s) {
       string res = "";
       int len = s.length();
       int arr[26] = {0};
       int maxi = INT_MIN;
       for(auto i : s) arr[(int)i - 97]++; 
       for(auto i : arr) maxi = max(maxi , i);
       unordered_map<char,int> umap;
       for(int i = 0 ; i < len ; i++){
        if(arr[(int)s[i] - 97] == maxi){
            umap[s[i]] = max(umap[s[i]] , i);
        }
       }
       for(int i = 0 ; i < len ; i++){
        if(umap.find(s[i]) != umap.end() and umap[s[i]] == i){
            res += s[i];
        }
       }
       return res;
    }
};
