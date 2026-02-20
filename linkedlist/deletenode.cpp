/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 //approach: we have been given a node which we have to delete , what we have done is copied the next node , and removed the node
class Solution {
  public:
      void deleteNode(ListNode* node) {
          node -> val  = node->next->val;
          node->next = node->next->next;
          
          
      }
  };