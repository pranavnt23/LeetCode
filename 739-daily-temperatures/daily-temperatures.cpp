class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        stack<int> stk;vector<int> res(temps.size(),0);
        for(int i=0;i<temps.size();i++){
            while(!stk.empty() and temps[i]>temps[stk.top()]) {
                res[stk.top()]=i-stk.top();
                stk.pop();
            }
            stk.push(i);
        }
        return res;
    }
};