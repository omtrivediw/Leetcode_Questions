class Solution {
public:
    // O(n) time and O(n) space in worst case
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> answer;
        int ptr1 = 0, ptr2 = 0;
        vector<int>temp;
        for(int i = 1 ; i <= n ; i++){
            temp.push_back(i);
        }
        while(ptr1 < target.size() and ptr2 < temp.size()){
            if(target[ptr1] == temp[ptr2]){
            answer.push_back("Push");
            ptr1++;
            ptr2++;
        }
            else{
                answer.push_back("Push");
                answer.push_back("Pop");
                ptr2++;
            }
    }
    return answer;
    }
};
