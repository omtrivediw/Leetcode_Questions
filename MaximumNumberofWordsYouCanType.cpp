class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<int,int>umap;
        for(auto i : brokenLetters){
            if(umap.find(i) == umap.end()){
                umap[i] = 1;
            }
            else{
                   umap[i]++;
            }
        }
        int count = 0;
        int l = text.length();
        for(int i = 0 ; i < l ; i++){
            bool flag = false;
            if(umap.find(text[i]) != umap.end()){
                flag = true;
                while(i < l and text[i] != ' '){
                    i++;
                }
            }
            if((!flag and text[i] == ' ') or (!flag and i == l - 1)){
                count++;
            }
        }
        return count;
    }
};
