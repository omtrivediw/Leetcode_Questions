class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin() , asteroids.end());
        long long temp = mass;
        int size = asteroids.size();
        for(int i = 0 ; i < size ; i++){
            if(temp >= asteroids[i]){
                temp += asteroids[i];
            }
            else{
                return false;
            }
        }
        return true;
    }
};
