class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"){
                int op1=stk.top();stk.pop();
                int op2=stk.top();stk.pop();
                stk.push(op2+op1);
                continue;
            }
            if(tokens[i]=="-"){
                int op1=stk.top();stk.pop();
                int op2=stk.top();stk.pop();
                stk.push(op2-op1);
                continue;
            }
            if(tokens[i]=="*"){
                int op1=stk.top();stk.pop();
                int op2=stk.top();stk.pop();
                stk.push(op2*op1);
                continue;
            }
            if(tokens[i]=="/"){
                int op1=stk.top();stk.pop();
                int op2=stk.top();stk.pop();
                stk.push(op2/op1);
                continue;
            }
            stk.push(stoi(tokens[i]));
        }
        return stk.top();
    }
};