class Solution {
public:
    string interpret(string command) {
        string res = "";
        for(int i = 0 ; i < command.length() - 1 ; i++){
            if(command[i] == 'G'){
                res += 'G';
            }
            else{
                if(command[i+1] == ')'){
                    res += 'o';
                    i++;
                }
                else{
                    res += "al";
                    i += 3;
                }
            }
        }
        if(command[command.length() - 1] == 'G'){
            res += 'G';
        };
        return res;
    }
};
