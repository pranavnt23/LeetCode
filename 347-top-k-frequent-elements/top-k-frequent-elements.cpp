class Solution {
public:
    static bool compare(pair<int, int> a, pair<int,int> b){
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> hmap;//<ele,occ> 
       vector<int> ans;
       for(int i=0;i<nums.size();i++){
        int ele=nums[i];hmap[ele]++;
       }
       vector<pair<int,int>> freq(hmap.begin(),hmap.end());
       sort(freq.begin(),freq.end(),compare);
       for(int i=0;i<k;i++){
        ans.push_back(freq[i].first);
       }
       return ans;
    }
};