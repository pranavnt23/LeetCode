class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);cout.tie(NULL);
        long long res=0;
        priority_queue <int> pq(nums.begin(),nums.end());
        while(k!=0){
            int ele=pq.top();pq.pop();
            res+=ele;
            ele=ceil((ele+2)/3);k--;
            pq.push(ele);
        }
        return res;
    }
};