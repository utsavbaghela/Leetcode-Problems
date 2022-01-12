E-232. Implement Queue using Stacks


class MyQueue {
public:
    
    stack<int> s1;
    stack<int> s2;
    MyQueue() { 
        
    }
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s2.empty())
        {
            while(!s1.empty())
            {
                int t=s1.top();
                s1.pop();
                s2.push(t);
            }
        }
        int t=s2.top();
        s2.pop();
        return t;
    }
    
    int peek() {
        if(!s2.empty())
            return s2.top();
        else
        {
            while(!s1.empty())
            {
                int t=s1.top();
                s1.pop();
                s2.push(t);
            }
        }
        int t=s2.top();
        return t;
        
    }
    
    bool empty() {
        if(s1.empty() && s2.empty())
            return true;
        else
            return false;
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