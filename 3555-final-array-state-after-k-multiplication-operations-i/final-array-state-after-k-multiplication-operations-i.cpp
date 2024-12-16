class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int mul) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;//<ele,index>
        vector<int> ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        while(k>0){
            int popel=pq.top().first;
            int popin=pq.top().second;
            pq.pop();
            popel=popel*mul;
            pq.push({popel,popin});
            k--;
        }
        for(int i=0;i<nums.size();i++){
            int popel=pq.top().first;
            int popin=pq.top().second;
            pq.pop();
            ans[popin]=popel;
        }
        return ans;
    }
};