class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxA=INT_MIN,i=0,j=height.size()-1;
        while(i<j){
            int area=(min(height[i],height[j])*(j-i));
            maxA=max(maxA,area);
            if(height[i]<=height[j]){i++;}
            else{j--;}
        }
        return maxA;
    }
};