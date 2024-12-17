class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<string> stk;int ans=0;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C" && !stk.empty()){stk.pop();}
            else if(ops[i]=="D"){
                int num=stoi(stk.top())*2;
                stk.push(to_string(num));
            }
            else if(ops[i]=="+"){
                int num1,num2;
                num1=stoi(stk.top());stk.pop();
                num2=stoi(stk.top());
                stk.push(to_string(num1));
                stk.push(to_string(num1+num2));
            }
            else{stk.push(ops[i]);}
        }
        while(!stk.empty()){
            ans+=stoi(stk.top());stk.pop();
        }
        return ans;
    }
};