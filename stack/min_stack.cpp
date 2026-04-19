#include <stack>
using namespace std;

class MinStack {
private:
    stack<int> st;
    stack<int> minSt;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        
        // If min stack is empty OR new value <= current min
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }
    
    void pop() {
        if (st.top() == minSt.top()) {
            minSt.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};