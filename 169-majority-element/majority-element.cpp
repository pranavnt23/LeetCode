class Solution {
public:
    int majorityElement(vector<int>& nums) {
           unordered_map<int,int> hmap;
           for(int i=0;i<nums.size();i++){
                hmap[nums[i]]++;
                if(hmap[nums[i]]>(nums.size()/2)){
                    return nums[i];
                }
           }
           return 0;
    }
};