class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int op2=stk.top();stk.pop();
                int op1=stk.top();stk.pop();
                int res;
                string op=tokens[i];
                if(op=="+") res=op1+op2;
                if(op=="-") res=op1-op2;
                if(op=="*") res=op1*op2;
                if(op=="/") res=op1/op2;

                stk.push(res);
            } 
            else{
                stk.push(stoi(tokens[i]));
            }
        }
        return stk.top();
    }
};