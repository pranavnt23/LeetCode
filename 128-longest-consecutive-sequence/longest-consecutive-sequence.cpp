class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int res=1,maxi=1;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1==nums[i]){
              maxi++;
            } 
            else if(nums[i-1]==nums[i]) continue;
            else{
                res=max(res,maxi);maxi=1;
            }
        }
        res=max(res,maxi);
        return res;
    }
};