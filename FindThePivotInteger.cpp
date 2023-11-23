class Solution {
public:
    int pivotInteger(int n) {
        int temp = (n * (n + 1)) / 2;
        int root = sqrt(temp);
        if(root * root == temp)
        return root;
        return -1;
    }
};
