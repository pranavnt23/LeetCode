class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans1=0,ans2=0;
        int l1=nums1.size(),l2=nums2.size();
        if(l2 % 2 != 0){
            for(int num:nums1){
                ans1^=num;
            }
        }
        if(l1 % 2 != 0){
            for(int num:nums2){
                ans2^=num;
            }
        }
        return ans1^ans2;
    }
};