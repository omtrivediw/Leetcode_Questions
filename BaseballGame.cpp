class Solution {
public:
    int calPoints(vector<string>& operations) {
        int result = 0;
        int num;
        stack<int> temp;
        for(int i = 0 ; i < operations.size() ; i++){
            if(operations[i] == "D"){
            temp.push(temp.top() * 2);
            num = temp.top();
            }
            else if(operations[i] == "C"){
            temp.pop();
            if(!temp.empty())
            num = temp.top();
            }
            else if(operations[i] == "+")
            {
              temp.pop();
              int sum = num + temp.top();
              temp.push(num);
              temp.push(sum);
              num = sum;

            }
            else{
            num = stoi(operations[i]);
            temp.push(stoi(operations[i]));
            }
        }
        while(!temp.empty()){
            result += temp.top();
            temp.pop();
        }
        return result;
    }
};
