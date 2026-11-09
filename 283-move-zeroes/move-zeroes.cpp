class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0;
        for(int i=0;i<nums.size();i++){
            if(nums[left]!=0) left++;
            if(nums[i]!=0 and i>left){
                nums[left]=nums[i];
                left++;
                nums[i]=0;
            } 
        }
    }
};