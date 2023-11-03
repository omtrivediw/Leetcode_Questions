class Solution {
public:
    int hammingDistance(int x, int y) {
        int distance = 0;
        while(max(x,y) != 0){
            int l = x & 1;
            int r = y & 1;
            if(l != r)
            distance++;
            x = x >> 1;
            y = y >> 1;
        }
        return distance;
    }
};
