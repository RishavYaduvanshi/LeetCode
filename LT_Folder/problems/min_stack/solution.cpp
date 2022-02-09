class MinStack {
public:
    vector<int>v;
    int min_ele = INT_MAX;
    stack<int>st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.size()==0)
            st.push(val);
        else
            st.push(min(val,st.top()));
        v.push_back(val);
    }
    
    void pop() {
        
        st.pop();
        v.pop_back();
        
    }
    
    int top() {
       return  v.back();
        
    }
    
    int getMin() {
        return st.top();
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