/*
https://leetcode.com/problems/min-stack/
https://www.youtube.com/watch?v=ufwPuyxkNVE
*/

class MinStack {
  
    
public:
      
    stack<int>s1,s2;
    
    MinStack() {
        
    }
    
    void push(int val) {
        if(s2.empty() || val<=s2.top())
            s2.push(val);
      
         s1.push(val);
        
  
        
    }
    
    void pop() {
        if(s1.empty())return;
        if(s1.top() == s2.top() )
        {
            s1.pop();
            s2.pop();
        }
        else 
            s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
