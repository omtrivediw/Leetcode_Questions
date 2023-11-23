class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int fascii = (int)coordinates[0];
        int sascii = (int)coordinates[1];
        if((fascii % 2 == 0 and sascii % 2 == 0) or (fascii % 2 and sascii % 2)) return false;
        return true;
    }
};
