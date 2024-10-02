class Solution {
public:
    std::vector<int> arrayRankTransform(std::vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n);
        vector<pair<int, int>> arri;
        if(n==0){return {};}
        for (int i = 0; i < n; i++) {
            arri.push_back({arr[i], i});
        }

        std::sort(arri.begin(), arri.end());

        int rank = 1;
        res[arri[0].second] = rank;  
        
        for (int i = 1; i < n; i++) {
            if (arri[i].first != arri[i - 1].first) {
                rank++;
            }
            res[arri[i].second] = rank;  
        }

        return res;
    }
};
