class Solution {
public:
    int minimumLength(string s) {
        int l = s.length();
        int start = 0 , end = l-1;
        char temp;
        while(start < end){
            if(s[start] != s[end]){
                return end - start + 1;
            }
            temp = s[start];
            while((start <= l - 1) and (end >= 0) and (s[start] == temp or s[end] == temp)){
                if(s[start] == temp){
                    start++;
                }
                if(s[end] == temp){
                    end--;
                }
            }
        }
        return (end - start + 1) < 0 ? 0 : end - start + 1;
    }
};
