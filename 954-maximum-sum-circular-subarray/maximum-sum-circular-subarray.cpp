class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        // to check if all nums[i] are negative
        bool pos= false;
        int big= INT_MIN;
        
        // to find biggest & smallest continous sum
        int mx= INT_MIN,mn= INT_MIN;
        int ln= nums.size();
        int temp1=0,temp2=0;
        int total=0;
        
        for(int i=0;i<ln;i++){
            // to check if all nums[i] are negative
            pos= pos|(nums[i]>= 0);
            big= max(big,nums[i]);
            
            // for biggest cont. sum
            temp1+= nums[i];
            mx= max(mx, temp1);
            if(temp1< 0)temp1= 0;
            
            // for smallest cont. sum (using kadane's algo of biggest sum by using -nums[i])
            temp2+= (-nums[i]);
            mn= max(mn, temp2);
            if(temp2<0)temp2= 0;
            
            // sum of all elements
            total+= nums[i];
        }
        
        // multiplying -1 to get real smallest cont. sum
        mn*= -1;
        
        return (!pos)? big: max(mx, total-mn);
    }
};