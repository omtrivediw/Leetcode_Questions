class Solution {
public:
    string decodeMessage(string key, string message) {
        int temp = 97;
        string res = "";
        unordered_map<char,char>umap;
        for(char i : key){
            if(i != ' ' and umap.find(i) == umap.end()){
                umap[i] = (char)temp;
                temp++;
            }
        }
        for(auto i : message){
            if(i == ' '){
                res += ' ';
            }
            else
            res += umap[i];
        }
        return res;
    }
};
