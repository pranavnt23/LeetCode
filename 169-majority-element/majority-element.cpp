class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res=nums[0],maxc=1,cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                cnt++;
                if(cnt>maxc){
                    maxc=cnt;
                    res=nums[i];
                }
            }
            else{
                cnt=1;
            }
        }
        return res;
    }
};