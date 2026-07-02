class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),i=0,j=n-1,capacity=0;
        int maxl=0,maxr=0;
        while(i<j){
            if(height[i]<height[j]){
                if(height[i]>=maxl){
                    maxl=height[i];
                }
                else{
                    capacity+=maxl-height[i];
                }
                i++;
            }
            else{
                if(height[j]>=maxr){
                    maxr=height[j];
                }
                else{
                    capacity+=maxr-height[j];
                }
                j--;
            }
        }
        return capacity;        
    }
};