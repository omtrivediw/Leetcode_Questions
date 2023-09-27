//125

class Solution {
public:
    bool isPalindrome(string s) {
        string temp_str = "";
        for(char i : s)
        {
          if((int)i >= 65 and (int)i <= 90)
          temp_str += char((int)i + 32);
          else if((int)i >= 48 and (int)i <= 57)
          temp_str += i;
          else if((int)i >= 97 and (int)i <= 122)
          temp_str += i;
        }
        cout << temp_str << " ";
        int first = 0, last = temp_str.length() - 1;
        while(first <= last)
        {
          if(temp_str[first] != temp_str[last])
          return false;
          first++;
          last--;
        }
        return true;
    }
};
