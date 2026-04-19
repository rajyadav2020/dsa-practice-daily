#include <iostream>
#include<stack>
using namespace std;

int main() {
    //what is stack : things inserted at last will be at top
    //works on the principle of lifo --> last in first out
    //build in library for stack
    //stack<datatype> stackname
    
    stack<int> st;
    st.push(1);
    st.push(3);
    st.push(2);
    
    //push -> used to add element in the stack and there is no indexing in the stack
    cout << "top element: " << st.top() << endl;
    st.pop(); //to remove the topmost element
    
    cout << st.top();
}