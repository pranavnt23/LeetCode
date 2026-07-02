class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=INT_MIN,i=0,j=height.size()-1;
        while(i<j){
            int num=(min(height[i],height[j])*(j-i));
            maxi=max(num,maxi);
            if(height[i]<=height[j]) i++;
            else j--;
        }
        return maxi;
    }
};