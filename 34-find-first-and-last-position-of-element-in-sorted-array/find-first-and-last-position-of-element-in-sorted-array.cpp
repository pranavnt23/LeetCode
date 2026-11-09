class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res={-1,-1};
        int left=binarySearch(nums,target,true);
        int right=binarySearch(nums,target,false);
        res[0]=left;res[1]=right;
        return res;
    }
    int binarySearch(vector<int>& nums, int target, bool isLeft){
        int left=0,right=nums.size()-1;
        int idx=-1;
        while(left<=right){
            int mid=(left+right)/2;

            if(nums[mid]>target) right=mid-1;
            else if(nums[mid]<target) left=mid+1;
            else{
                idx=mid;
                if(isLeft) right=mid-1;
                else left=mid+1;
            }
        }
        return idx;
    }
};