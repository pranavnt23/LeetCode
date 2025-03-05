class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hmap;//<ele,ind>
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            int ele=target-nums[i];
            if(hmap[ele]!=0){
                arr.push_back(hmap[ele]);
                arr.push_back(i+1);
                return arr;
            }
            else{
                int elee=nums[i];
                hmap[elee]=i+1;
            }
        }
        return arr;
    }
};