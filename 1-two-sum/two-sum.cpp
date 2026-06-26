class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        unordered_map<int,int> hmap;
        for(int i=0;i<nums.size();i++){
            if(hmap.find(target-nums[i])!=hmap.end()) {
                return{i,hmap[target-nums[i]]};
            }
            hmap[nums[i]]=i;
        }
        return{};
    }
};