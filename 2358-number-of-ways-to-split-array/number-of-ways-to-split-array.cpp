class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
	long long total = 0;
	for (const auto& n : nums)
		total += n;
		

        int ans = 0;
        long long right = 0, left = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            right += nums[i];
            left = total - right;

            if (right >= left)
                ans++;
        }

        return ans;
    }
};