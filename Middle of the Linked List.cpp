/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int n  = 0;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        for(int i = 0; i<n/2; i++){
            head = head->next;
        }
        return head;
    }
};
