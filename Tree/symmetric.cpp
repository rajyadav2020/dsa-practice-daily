/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool isSymmetric(Node* root) {
       if(root==nullptr)
       {
           return true;
       }
       
       return ismirror(root->left,root->right);
        
    }
    
    private:
    bool ismirror(Node*leftnode,Node*rightnode)
    {
        if(leftnode==nullptr && rightnode==nullptr)
        {
            return true;
        }
        
        if(leftnode==nullptr || rightnode==nullptr || leftnode->data!= rightnode->data)
        {
            return false;
        }
        
        return ismirror(leftnode->left,rightnode->right) && ismirror(leftnode->right,rightnode->left);
    }
};