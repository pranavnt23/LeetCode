class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> arr(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            int ind=(i+k)%nums.size();
            arr[ind]=nums[i];
        }
        nums=arr;
    }
};