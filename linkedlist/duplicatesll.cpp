class Solution {
  public:
    Node* removeDuplicates(Node* headRef) {
        // code here
        if(headRef == NULL)
        {
            return NULL;
        }
        
        Node*temp = headRef;
        
        while(temp!=NULL && temp->next!=NULL)
        {
            if(temp->data == temp->next->data)
            {
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};