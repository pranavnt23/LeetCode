class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hmap;
        for(int i=0;i<nums.size();i++){
            hmap[nums[i]]++;
        }
        int res=0,maxc=INT_MIN;
        for(const auto&[key,ele]:hmap){
            if(maxc<ele){
                res=key;
                maxc=ele;
            }
        }
        return res;
    }
};