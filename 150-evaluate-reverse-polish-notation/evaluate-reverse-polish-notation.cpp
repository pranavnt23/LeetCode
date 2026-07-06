class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(int i=0;i<tokens.size();i++){
            string c=tokens[i];
            if(c=="+" || c=="-"||c=="*"||c=="/"){
                int op1=stk.top();
                stk.pop();
                int op2=stk.top(),temp=0;
                stk.pop();
                if(c=="+") temp=op2+op1;
                if(c=="-") temp=op2-op1;
                if(c=="*") temp=op2*op1;
                if(c=="/") temp=op2/op1;
                stk.push(temp);
            }
            else {stk.push(stoi(c));}
        }
        return stk.top();
    }
};