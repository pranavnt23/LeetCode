class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        int left=0;
        int maxB=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            while(nums[i]-nums[left]>2*k){
                left++;
            }
            maxB=max(maxB,i-left+1);
        }

        return maxB;
    }
};