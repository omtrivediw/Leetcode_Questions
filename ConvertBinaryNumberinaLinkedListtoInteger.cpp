/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int>binary;
        int decimal = 0;
        int j = 0;
        ListNode* temp = head;
        while(temp){
            binary.push_back(temp -> val);
            temp = temp -> next;
        }
        for(int i = binary.size() - 1 ; i >= 0 ; i--){
            decimal += (binary[i] * pow(2, j));
            j++;
        }
        return decimal;
    }
};
