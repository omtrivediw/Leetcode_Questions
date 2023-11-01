class Solution {
public:
    int strStr(string haystack, string needle) {
        int ptr1 = 0;
        int ptr2 = 0;
        int temp;
        while(ptr1 < haystack.length()){
            if(haystack[ptr1] != needle[ptr2])
            ptr1++;
            else if(haystack[ptr1] == needle[ptr2]){
                temp = ptr1;
                while(haystack[ptr1] == needle[ptr2]){
                    ptr1++;
                    ptr2++;
                    if(ptr2 == needle.length()){
                        return temp;
                    }
                }
                // ptr1++;
                ptr2 = 0;
                ptr1 = temp+1;
            }
        }
        return -1;
    }
};
