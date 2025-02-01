class Solution {
public:
    bool isodd(int n){
            if(n%2==0) return false;
            return true;
        }
        bool iseve(int n){
            if(n%2==0) return true;
            return false;
        }
    bool isArraySpecial(vector<int>& nums) {        
        if(nums.size()==1) return true;
        for(int i=1;i<nums.size();i++){
            if(isodd(nums[i])){
                if(iseve(nums[i-1])){continue;}
                else{return false;}
            }
            if(iseve(nums[i])){
                if(isodd(nums[i-1])){continue;}
                else{return false;}
            }
        }
        return true;
    }
};