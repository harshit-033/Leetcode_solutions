class MyQueue {
public:
    stack<int> s;
    stack<int> r;
    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
        
        
                
    }
    
    int pop() {
        if(r.empty()){
            while(!s.empty()){
                r.push(s.top());
                s.pop();
            }
        }

        int val=r.top();
        r.pop();
        return val;
        
        
    }
    
    int peek() {
        if(r.empty()){
            while(!s.empty()){
                r.push(s.top());
                s.pop();
            }
        }
        int val=r.top();
        
        return val;
        
    }
    
    bool empty() {
        if(r.empty()){
            while(!s.empty()){
                r.push(s.top());
                s.pop();
            }
        }
        return r.empty();
        
    }
};