ListNode* removeElements(ListNode* head, int target) {
  // 1. Create the dummy node and link it
  ListNode* dummy = new ListNode(-1);
  dummy->next = head;
  
  // 2. Start curr at the dummy node
  ListNode* curr = dummy;
  
  while (curr->next != nullptr) {
      
      // 3. If the NEXT node is the target, delete it
      if (curr->next->val == target) {
          ListNode* nodeToDelete = curr->next;
          curr->next = curr->next->next; // Build the bridge
          
          delete nodeToDelete; 
          
          // CRUCIAL: Notice there is NO curr = curr->next here!
          // We stay standing in the same spot so the next loop 
          // iteration can check the newly bridged node.
      } 
      else {
          // 4. Only move forward if we didn't delete anything
          curr = curr->next;
      }
  }
  
  // 5. Save the new head, clean up our dummy, and return
  ListNode* newHead = dummy->next;
  delete dummy;
  
  return newHead;
}