class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int ptr1 = 0 , ptr2 = 0 , ptr3 = 0;
        int count = 0;
        int first = s1.length(), second = s2.length() , third = s3.length();
        while(ptr1 < first and ptr2 < second and ptr3 < third){
            if(s1[ptr1] == s2[ptr2] and s1[ptr1] == s3[ptr3]){
                count++;
            }
            else break;
            ptr1++;
            ptr2++;
            ptr3++;
        }
        if(count == 0) return -1;
        return (first - count) + (second - count) + (third - count);
    }
};
