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
    int pairSum(ListNode* head) {
        int answer = 0;
        int size = 0, half = 0, topper;
        ListNode* forsize = head;
        ListNode* forstack = head;
        stack<int>twins;
        while(forsize){
            size++;
            forsize = forsize -> next;
        }
        while(forstack){
            if(half == size / 2){
                topper = twins.top();
                answer = max(topper + forstack -> val , answer);
                twins.pop();
            }
            else{
                twins.push(forstack -> val);
                half++;
            }
            forstack = forstack -> next;
        }
        // cout << half << " " << topper;
        return answer;
    }
};
