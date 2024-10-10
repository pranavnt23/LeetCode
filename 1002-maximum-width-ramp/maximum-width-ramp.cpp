class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        
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