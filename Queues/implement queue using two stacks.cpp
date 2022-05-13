https://leetcode.com/problems/implement-queue-using-stacks/
https://www.geeksforgeeks.org/queue-using-stacks/
https://www.youtube.com/watch?v=3Et9MrMc02A&list=PLgUwDviBIf0p4ozDR_kJJkONnb1wdx2Ma

class MyQueue {
     stack<int>s1;
     stack<int>s2;
public:
    MyQueue() {
       
    }
    
    void push(int x) {
        
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        
        }
        s1.push(x);
        
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    
    }
    
    int pop() {
        int p=s1.top();
        s1.pop();
        return p;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        if(s1.empty() == false)return false;
        return true;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
