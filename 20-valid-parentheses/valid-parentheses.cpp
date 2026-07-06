class Solution {
public:
    bool isValid(string str) {
        stack<char> stk;
        for(int i=0;i<str.size();i++){
            char ele=str[i];
            if(ele=='{'||ele=='('||ele=='[') stk.push(ele);
            else{
                if(stk.empty()) {return false;}
                if(ele=='}' and stk.top()=='{') stk.pop();
                else if(ele==')' and stk.top()=='(') stk.pop();
                else if(ele==']' and stk.top()=='[') stk.pop();
                else return false;
            }
        }
        if(stk.empty()) return true;
        else return false;
    }
};