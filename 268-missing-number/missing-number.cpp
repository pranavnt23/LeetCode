class Solution {
public:
    int missingNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[0]!=0){return 0;}
            if((nums[i-1]+1)!=nums[i]){return nums[i-1]+1;}
        }
        
        if(nums.size()==1){if(nums[0]==1){return 0;}
        else{return 1;}}
        else{return nums[nums.size()-1]+1;}
        /*int n=nums.size();
        int sum=n*((n+1)/2);
        int diff=0;
        for(int i=0;i<nums.size();i++){
            diff+=nums[i];
        }
        return sum-diff;*/
    }
};