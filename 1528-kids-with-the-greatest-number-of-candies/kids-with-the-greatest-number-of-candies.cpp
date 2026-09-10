class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int excd) {
        vector<bool> res;int maxx=INT_MIN;
        for(int i=0;i<candies.size();i++){
            maxx=max(maxx,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+excd>=maxx){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};