class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = nums[0], sum = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if (nums[i-1] >= nums[i]) { 
                maxSum = max(maxSum, sum);
                sum = 0;
            }
            sum += nums[i];
        }
        return max(maxSum, sum); 
    }
};
