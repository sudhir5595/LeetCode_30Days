class MinStack {
public:
    /** initialize your data structure here. */
    vector <int> v;
    vector <int> min_store;
    MinStack() {
        
    }
    
    void push(int x) {
        v.push_back(x);
        if(min_store.size() == 0 || x <= min_store[min_store.size() - 1]){
            min_store.push_back(x);
        }
        return;
    }
    
    void pop() {
        if(v[v.size()-1] == min_store[min_store.size()-1]){
            min_store.pop_back();
        }
        v.pop_back();
        return;
    }
    
    int top() {
        return v[v.size()-1];
    }
    
    int getMin() {
        int value = min_store[min_store.size()-1];
        return value;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
