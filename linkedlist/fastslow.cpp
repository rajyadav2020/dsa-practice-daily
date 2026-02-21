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


//Approach: we will do this by hare and tortoise algorithm , means one pointer will run with 1x speed and another pointer will move with 2x speed and this is the way wwe will achieve our middle node of the linkedlist
class Solution {
  public:
      ListNode* middleNode(ListNode* head) {
          ListNode*slow = head;
          ListNode*fast = head;
  
          while(fast!=nullptr && fast->next!=nullptr){
              slow = slow->next;
              fast = fast->next->next;
          }
  
          
          return slow;
      }
  };