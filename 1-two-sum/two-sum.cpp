class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        unordered_map<int,int> keyind;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(keyind.find(target-num)!=keyind.end()){
                return{i,keyind[target-num]};
            }
            keyind[num]=i;
        }
        return{};
    }
};