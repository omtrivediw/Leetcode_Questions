class Solution {
public:
    bool backspaceCompare(string s, string t) {
        //using stack
        stack<char> fors;
        stack<char> fort;
        for(char i : s){
            if(i != '#')
            fors.push(i);
            else{
            if(!fors.empty())
            fors.pop();}
        }
        for(char i : t){
            if(i != '#')
            fort.push(i);
            else{
            if(!fort.empty())
            fort.pop();}
        }
        
        while(!fors.empty() or !fort.empty()){
            if((fors.empty() and !fort.empty()) or(!fors.empty() and fort.empty()))
            return false;
            else if(fors.top() != fort.top())
            return false;
            fors.pop();
            fort.pop();
        }
        return true;
    }
};
//Constant space
class Solution {
public:
    bool backspaceCompare(string s, string t){
        return findstring(s) == findstring(t);
    }
private:
    string findstring(string str){
        int count = 0;
        string result = "";
        for(int i = str.length()-1 ; i >= 0 ; i--){
            if(str[i] == '#')
            count++;
            else{
                if(count > 0)
                count--;
                else
                result += str[i];
            }
        }
        return result;
    }
};
