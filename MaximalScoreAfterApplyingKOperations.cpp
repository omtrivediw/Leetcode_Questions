class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long ans = 0;
        priority_queue<int>q;
        for(auto i : nums) q.push(i);
        while(k--){
            int maxi = q.top();
            ans += maxi;
            q.pop();
            if(maxi % 3 == 0)q.push(maxi / 3);
            else q.push((maxi / 3) + 1);
        }
        return ans;
    }
};
