class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        set<int> st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){
            if(nums.size()%2==0 && nums[i]!=nums[i+1]){return nums[i];}
            else{
                if(i==nums.size()-1){return nums[i];}
                else if(nums[i]!=nums[i+1]){return nums[i];}
            }
        }
        return 0;
    }
};