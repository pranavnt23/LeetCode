class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        vector<bool> res;
        int cnt=0;
        vector<int> pref(nums.size(),0);
        for(int i=1;i<nums.size();i++){
            pref[i]=pref[i-1];
            if(nums[i]%2==nums[i-1]%2){
                pref[i]++;
            }
        }
        //if(nums.size()==1){res.push_back(true);return res;}
        for(int i=0;i<queries.size();i++){
            int u=queries[i][0],v=queries[i][1];
            if((pref[v]-pref[u])>=1){res.push_back(false);}
            else{res.push_back(true);}
        }
        return res;
    }
};