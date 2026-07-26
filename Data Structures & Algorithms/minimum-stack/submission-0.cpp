class MinStack {
public:
    stack<pair<int,int>> st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(!st.empty()){
            pair<int,int> top = st.top();
            int minval=min(val,top.second);
            st.push({val,minval});
        }
        else{
            st.push({val,val});
        }

    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        if(st.empty()){
            return -1;
        }
        pair<int,int> top=st.top();
        return top.first;

    }
    
    int getMin() {
        if(st.empty()){
            return 0;
        }
        pair<int,int>top=st.top();
        return  top.second;
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