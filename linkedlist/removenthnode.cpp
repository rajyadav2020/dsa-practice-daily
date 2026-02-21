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

 //approach -> We move fast pointer n steps ahead to maintain a gap of n nodes between fast and slow. Then we move both pointers together. When fast reaches null, slow will be at the nth node from the end and prev will be just before it. We then adjust prev->next to remove slow.
class Solution {
  public:
      ListNode* removeNthFromEnd(ListNode* head, int n) {
          ListNode*prev = nullptr;
          ListNode*slow = head;
          ListNode*fast = head;
  
          while(n>0){
              fast = fast->next;
              n--;
          }
          while(fast!=nullptr){
              prev = slow;
  
              fast = fast->next;
              slow = slow->next;
          }
          if(prev==nullptr){
              head = head->next;
          }
          else{
              prev->next = prev->next->next;
          }
          return head;
          
      }
  };