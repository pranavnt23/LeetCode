class Solution {
public:
    int minAddToMakeValid(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int addr=0;
        stack<char> stk;
        for(auto& str:s){
            if(str=='('){
                stk.push(str);
                addr++;
            }
            else if(str==')'){
                if((!stk.empty()) && (stk.top()=='(')){
                stk.pop();addr--;
                }
                else{addr++;}
            }
            else{addr++;}
        }
        return addr;
    }
};