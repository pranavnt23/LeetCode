class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        unordered_set<int> hmap;
        for(int i=0;i<arr.size();i++){
            int x=arr[i]*2,y=arr[i]/2;
            if((hmap.count(x))||((arr[i]%2==0)&&(hmap.count(y)))){
                return true;
            }
            hmap.insert(arr[i]);
        }
        return false;
    }
};