class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int maxc=1,occ=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]-1==nums[i-1]){
                occ++;
            }
            else{occ=1;}
            if(occ>maxc){maxc=occ;}
        }
        return maxc;
    }
};