class MinStack {
public:
    vector<int> a;
    MinStack() {
        
    }
    
    void push(int val) {
        a.push_back(val);
    }
    
    void pop() {
        if(!a.empty()){
        a.pop_back();
        }
    }
    
    int top() {
        return a.back();
    }
    
    int getMin() {

        int mini=INT_MAX;
        for(auto x:a){
            
            mini=min(mini,x);
        }
        return mini;
    }
};
