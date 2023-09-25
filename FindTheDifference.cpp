//Leetcode 389

class Solution {
public:
    char findTheDifference(string s, string t) {
        //Sorting the strings

        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] != t[i])
            return t[i];
        }
        return t[t.length() - 1];

        //Frequency array

        int arr[26] = {0};
        for(char i : s){
            arr[int(i) - 97]++;
        }
        for(char i : t)
        {
            if(arr[int(i) - 97] == 0)
            return i;
        }
        return 'a';

        //ASCII number

        int sum = 0;
        for (auto i : s) {
            sum += (int)i;
        }
        int sum1 = 0;
        for (auto i : t) {
            sum1 += (int)i;
        }
        return (char)(sum1 - sum);
    }
};