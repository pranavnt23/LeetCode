class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> hmap;
        for(int i=0;i<nums.size();i++){
            if(hmap.find(nums[i])!=hmap.end()){
                return nums[i];
            }
            hmap[nums[i]]=i;
        }
        return -1;
    }
};