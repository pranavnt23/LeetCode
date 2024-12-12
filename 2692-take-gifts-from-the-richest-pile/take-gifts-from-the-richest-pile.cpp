class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        priority_queue<int> pq(gifts.begin(),gifts.end());
        long long ans=0;
        while(k--){
            int num=pq.top();
            pq.pop();
            pq.push(sqrt(num));
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};