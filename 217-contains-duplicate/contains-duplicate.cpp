class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hmap; //num,num of occurence
        for(int i=0;i<nums.size();i++){
            int ele=nums[i];
            hmap[ele]++;
            if(hmap[ele]>=2){
                return true;
            }
        }
        return false;
    }
};