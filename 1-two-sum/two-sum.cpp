class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        /*vector<int> res;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                    res.push_back(i);res.push_back(j);
                    return res;
                }
            }
        }
        return res;*/
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