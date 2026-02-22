/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 //appraoch -> Step 1: Detect cycle using slow and fast pointer.
// Step 2: When they meet, move one pointer to head.
// Step 3: Move both one step at a time.
// Step 4: Where they meet again = cycle start
class Solution {
  public:
      ListNode *detectCycle(ListNode *head) {
          ListNode*slow = head;
          ListNode*fast = head;
  
          while(fast!=nullptr && fast->next!=nullptr)
          {
              slow = slow->next;
              fast = fast->next->next;
              if(fast==slow)
              {
                  ListNode*entry = head;
  
                  while(entry!=slow)
                  {
                      entry = entry->next;
                      slow = slow->next;
                  }
                  return entry;
              }
          }
  
          return nullptr;
          
      }
  };