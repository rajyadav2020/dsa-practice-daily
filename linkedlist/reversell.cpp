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

 //here we took the pointer prev to nullptr,pointer temp to head , and then we took pointer nxt to point to the next node and too the prev = temp and temp = nxt , so that the connection will not break in linkedlist  
class Solution {
  public:
      ListNode* reverseList(ListNode* head) {
          ListNode*prev = nullptr;
          ListNode*temp = head;
  
          while(temp!=nullptr)
          {
              ListNode*nxt = temp->next;
              temp->next = prev;
              prev = temp;
              temp = nxt;
          }
          return prev;
          
      }
  };