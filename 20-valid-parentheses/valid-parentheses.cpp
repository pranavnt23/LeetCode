class Solution {
public:
    bool isValid(string str) {
        stack<char> stk;
        for (char s:str){
            if(s=='('||s=='{'||s=='[') stk.push(s);
            else {
                if(stk.empty()){ return false; }
                char ele=stk.top();
                if(ele=='(' and s!=')') return false;
                if(ele=='[' and s!=']') return false;
                if(ele=='{' and s!='}') return false;
                stk.pop();
            }
        }
        if(stk.empty()) return true;
        else return false;
    }
};