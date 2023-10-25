class Solution {
public:
    int maxArea(vector<int>& height) {
        int first = 0 , last = height.size() - 1;
        int maximum = 0;
        while(first <= last){
            maximum = max(((last - first) * min(height[first], height[last])), maximum);
            if(height[first] <= height[last])
            first++;
            else
            last--;
        }
        return maximum;
    }
};
