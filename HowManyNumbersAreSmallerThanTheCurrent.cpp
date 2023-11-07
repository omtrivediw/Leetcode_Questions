class Solution1 {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;
        int count = 0;
        for(int i = 0 ; i < nums.size(); i++){
            for(int j = 0 ; j < nums.size() ; j++){
                if(nums[i] > nums[j])
                {
                    count++;
                }
            }
            answer.push_back(count);
            count = 0;
        }
        return answer;
    }
};

class Solution{
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums){
        vector<int> answer;
        int temp[101] = {0};
        for(int i = 0 ; i < nums.size() ; i++)
        temp[nums[i]]++;
        for(int i = 1 ; i < 101 ; i++)
        temp[i] += temp[i-1];
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0)
            answer.push_back(0);
            else
            answer.push_back(temp[nums[i] - 1]);
        }
        return answer;
        

    }
};
