class Solution {
  public:
      int sum = 0; // Keeping sum global is fine here to collect the total!
  
      // Pass the accumulated number IN as a parameter
      void r(TreeNode* root, int currentNumber) {
          if(root == NULL){
              return;
          }
  
          // 1. UPDATE the number FIRST so it includes the current node
          currentNumber = currentNumber * 10 + root->val;
  
          // 2. THEN check if it is a leaf. If it is, add the fully built number to sum.
          if(root->left == NULL && root->right == NULL) {
              sum = sum + currentNumber;
              return; // We hit a leaf, no need to go deeper
          }
  
          // 3. Pass the newly built number down to the children
          r(root->left, currentNumber);
          r(root->right, currentNumber);
          
          // Notice there is no "currentNumber = currentNumber / 10" here!
          // The call stack handles it automatically.
      }
  
      int sumNumbers(TreeNode* root) {
          // Start the recursion with an initial number of 0
          r(root, 0);
          return sum;
      }
  };