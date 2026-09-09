class MyQueue {
  public:
      stack<int> st1;  // input stack
      stack<int> st2;  // output stack
  
      MyQueue() {
          
      }
      
      void push(int x) {
          // Always push new elements into st1
          st1.push(x);
      }
      
      int pop() {
          // If st2 is empty, transfer all elements
          // from st1 to st2
          if(st2.empty()) {
              while(!st1.empty()) {
                  st2.push(st1.top());
                  st1.pop();
              }
          }
  
          // Oldest element is now at the top of st2
          int ans = st2.top();
          st2.pop();
  
          return ans;
      }
      
      int peek() {
          // If st2 is empty, transfer all elements
          if(st2.empty()) {
              while(!st1.empty()) {
                  st2.push(st1.top());
                  st1.pop();
              }
          }
  
          // Just return the oldest element
          // without removing it
          return st2.top();
      }
      
      bool empty() {
          // Queue is empty only when BOTH stacks are empty
          return st1.empty() && st2.empty();
      }
  };