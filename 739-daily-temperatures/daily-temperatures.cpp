class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> stk;

        vector<int> ans(temperatures.size(), 0);
        for (int i = 0; i < temperatures.size(); i++) {
            while (!stk.empty() and temperatures[i] > stk.top().second) {
                ans[stk.top().first] = (i - stk.top().first);
                stk.pop();
            }
            stk.push({i, temperatures[i]});
        }

        return ans;
    }
};