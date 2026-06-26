class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // ios_base::sync_with_stdio(false);
        // cin.tie(NULL);
        unordered_map<int, int> hmap;
        for(int i=0;i<nums.size();i++){
            hmap[nums[i]]++;
            if(hmap[nums[i]]>1) return true;
        }
        return false;
    }
};