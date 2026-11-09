class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=INT_MIN,minP=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minP=min(minP,prices[i]);
            if((prices[i]-minP)>maxP){
                maxP=prices[i]-minP;
            }
        }
        return maxP;
    }
};
