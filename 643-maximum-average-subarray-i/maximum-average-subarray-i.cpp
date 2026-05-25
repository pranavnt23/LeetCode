class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxi=INT_MIN, window_avg=0;int window_sum=0;
        for(int i=0;i<k;i++){
            window_sum+=nums[i];
        }
        window_avg=(double)window_sum/k;
        maxi=window_avg;
        for(int i=k;i<nums.size();i++){
            window_sum+=nums[i];window_sum-=nums[i-k];
            window_avg=(double)window_sum/k;
            maxi=max(maxi,window_avg);
        }
        return maxi;
    }
};