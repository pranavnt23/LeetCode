class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0; // Handle empty input
        
        sort(nums.begin(), nums.end());
        int maxc = 1, occ = 1; // Start from 1 because a single number is a sequence
        
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i - 1]) continue; // Skip duplicates
            
            if(nums[i] == nums[i - 1] + 1) {
                occ++;
            } else {
                maxc = max(maxc, occ);
                occ = 1; // Reset counter for new sequence
            }
        }
        return max(maxc, occ); // Compare the last sequence
    }
};
