class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        string result = "A";
        unordered_map<string,int>umap;
        int send = senders.size();
        int maxi = INT_MIN;
        for(int i = 0 ; i < send ; i++){
            umap[senders[i]] += wordcount(messages[i]);
            maxi = max(maxi , umap[senders[i]]);
        }
        for(auto key : umap){
            if(key.second == maxi){
                if(key.first > result)
                result = key.first;
            }
        }
        return result;
    }
private:
    int wordcount(string str){
        int count = 0;
        for(auto i :str){
            if(i == ' ') count++;
        }
        return ++count;
    }
};
