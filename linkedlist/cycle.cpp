/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//  approach -> we have taken two pointers fast and slow , slow will move with 1x speed and fast will move with 2x speed and if slow and fast meets than a cycle is present else not 
 class Solution {
  public:
      bool hasCycle(ListNode *head) {
          ListNode*slow = head;
          ListNode*fast = head;
  
          while(fast!=nullptr && fast->next!=nullptr)
          {
              slow = slow->next;
              fast = fast->next->next;
  
              if(slow==fast){
                  return true;
              }
  
          }
          return false;
  
  
      }
  };