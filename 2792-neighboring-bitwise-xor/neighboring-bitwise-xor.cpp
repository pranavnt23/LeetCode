class Solution {
public:
    bool doesValidArrayExist(vector<int>& deri) {
        int res=0;
        for(int i=0;i<deri.size();i++){
            res^=deri[i];    
        }
        return res==0;
    }
};