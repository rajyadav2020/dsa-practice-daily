/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 class Solution {
  public:
      int widthOfBinaryTree(TreeNode* root) {
          queue<pair<TreeNode*,long long int>>q;
          q.push({root , 0});
          unsigned long long maxwidth = 0 ;
  
          while(q.size() > 0)
          {
              int levelsize = q.size();
              unsigned long long leftwidth = q.front().second;
              unsigned long long rightwidth = q.back().second;
  
              maxwidth = max(maxwidth , rightwidth - leftwidth + 1);
  
              for(int i=0 ; i<levelsize ; i++)
              {
                  TreeNode*node = q.front().first;
                  unsigned long long index = q.front().second;
                  q.pop();
  
                  if(node ->left)
                  {
                      q.push({node->left , 2*index+1});
                  }
  
                  if(node->right)
                  {
                      q.push({node->right, 2*index + 2});
                  }
              }
  
              
          }
          return maxwidth;
      }
  };