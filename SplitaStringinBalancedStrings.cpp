class Solution {
public:
    int balancedStringSplit(string s) {
        int rcount = 0 , lcount = 0;
        int ans= 0;
        for(char i : s){
            if(i == 'R')
            rcount++;
            else 
            lcount++;
            if(rcount == lcount){
                ans++;
                rcount = 0;
                lcount = 0;
            }
        }
        return ans;
    }
};
