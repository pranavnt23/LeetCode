class CustomStack {
private:
    vector<int> stack;
    int maxSize;
public:
    CustomStack(int maxSize):maxSize(maxSize) {
        
    }
    
    void push(int x) {
        if(stack.size() < maxSize){
            stack.push_back(x);
        }
    }
    
    int pop() {
        if(stack.empty()){return -1;}
        int x = stack.back();
        stack.pop_back();
        return x;
    }
    
    void increment(int k, int val) {
        if(k>stack.size()){k=stack.size();}
        for(int i=0;i<k;i++){
            stack[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */