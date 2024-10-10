class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        stack<int> stk;
        int maxx=0;
        for(int i=0;i<nums.size();i++){
            if(stk.empty() || (nums[i] < nums[stk.top()])){
                stk.push(i);
            }
        }
        for(int i=(nums.size()-1);i>=0;--i){
            while(!stk.empty() && nums[i]>=nums[stk.top()]){
                maxx=max(maxx,(i-stk.top()));
                stk.pop();
            }
        }
        return maxx;
    }
};