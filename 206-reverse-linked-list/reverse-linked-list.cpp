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
    ListNode* reverseList(ListNode* head) {
      ListNode*prv = NULL;
      ListNode*curr = head;
      ListNode*net = NULL;
      while(curr != NULL ){
        net = curr->next;
        curr->next = prv;
        prv = curr;
        curr = net;
      }
        return prv;
    }
};