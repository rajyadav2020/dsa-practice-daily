//problem:ways to reach n'th stair
//platform: gfg
//difficulty:medium
//In this problem , the approach i used is same as the fibbonaci series calculation where the number is derived by the sum of the previous two numbers
//to reach the n th stair
//you can come from (n-1) th stair by taking 1 step
//you can come from (n-2) th stair by taking 2 step

class Solution {
  public:
    int countWays(int n) {
        
        if(n==1) return 1; //base case
        if(n==2) return 2; //base case
        
        int answer = countWays(n-1)+countWays(n-2);
        return answer;
    }
};

//time complexity:O(2^n)
//space compplexity: O(n) //recursive call stack
