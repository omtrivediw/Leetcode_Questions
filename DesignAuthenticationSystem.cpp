class AuthenticationManager {
public:
    unordered_map<string,int>umap;
    int tolive;
    AuthenticationManager(int timeToLive) {
        tolive = timeToLive;    
    }
    
    void generate(string tokenId, int currentTime) {
        umap[tokenId] = currentTime;
    }
    
    void renew(string tokenId, int currentTime) {
        if(umap.find(tokenId) != umap.end()){
            if((umap[tokenId] + tolive) > currentTime){
                umap[tokenId] = currentTime;
            }
        }
    }
    int countUnexpiredTokens(int currentTime) {
        int count = 0;
        for(auto key : umap){
            if((key.second + tolive) > currentTime){
                count++;
            }
        }
        return count;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */
