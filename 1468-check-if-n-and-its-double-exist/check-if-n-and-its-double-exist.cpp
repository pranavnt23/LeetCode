class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        unordered_map<int,int> hmap;
        for(int i=0;i<arr.size();i++){
            int x=arr[i]*2,y=arr[i]/2;
            if((hmap.find(x)!=hmap.end())||((arr[i]%2==0)&&(hmap.find(y)!=hmap.end()))){
                return true;
            }
            hmap[arr[i]]=i;
        }
        return false;
    }
};