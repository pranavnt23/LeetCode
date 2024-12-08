class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        vector<vector<int>> mrg;
        int i=0;
        while(i<intervals.size()&& intervals[i][1]<newInterval[0]){
            mrg.push_back(intervals[i]);i++;
        }
        vector<int> nInterval=newInterval;
        while(i<intervals.size()&&intervals[i][0]<=newInterval[1]){
            nInterval={min(nInterval[0],intervals[i][0]),max(nInterval[1],intervals[i][1])};
            i++;
        }
        mrg.push_back(nInterval);
        while(i<intervals.size()){
            mrg.push_back(intervals[i]);
            i++;
        }
        return mrg;
    }
};