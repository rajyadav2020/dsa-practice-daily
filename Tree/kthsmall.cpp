class Solution {
  public:
      int prevorder = 0;
  
      int kthSmallest(TreeNode* root, int k) {
          if (root == NULL) {
              return -1;
          }
  
          // Go left
          int leftans = kthSmallest(root->left, k);
  
          if (leftans != -1) {
              return leftans;
          }
  
          // Visit current node
          prevorder++;
  
          if (prevorder == k) {
              return root->val;
          }
  
          // Go right
          int rightans = kthSmallest(root->right, k);
  
          if (rightans != -1) {
              return rightans;
          }
  
          return -1;
      }
  };