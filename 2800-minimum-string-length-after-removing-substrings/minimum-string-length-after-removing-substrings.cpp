class Solution {
public:
    int minLength(string s) {
        stack<char> stk;
        for(char cur:s){
            if(!stk.empty() && 
            ((stk.top()=='A' && cur=='B')||
            (stk.top()=='C' && cur=='D'))){
                stk.pop();
            }
            else{stk.push(cur);}
        }
        return stk.size();
    }
};