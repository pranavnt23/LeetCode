class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        stack<int> mstk;
        for(int i=0;i<n;i++){
            if(mstk.empty() || arr[i]>mstk.top()){mstk.push(arr[i]);}
            else{
                int maxe=mstk.top();
                while(!mstk.empty() && arr[i]<mstk.top()){
                    mstk.pop();
                }
                mstk.push(maxe);
            }
        }
        return mstk.size();
    }
};