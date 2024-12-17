class Solution {
public:
    string repeatLimitedString(string s, int rep) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);cout.tie(nullptr);
        string ans = "";
        unordered_map<char, int> hmap;
        priority_queue<pair<char, int>> pq;
        for (auto atr : s) {hmap[atr]++;}
        for (auto [c, cnt] : hmap) {pq.push({c, cnt});}
        while (!pq.empty()) {
            auto [ch, num] = pq.top(); 
            pq.pop();

            int use = min(rep, num);
            ans.append(use, ch);
            num -= use;
            if (num > 0) {
                if (pq.empty()) break;
                auto [ch2, num2] = pq.top();
                pq.pop();
                
                ans += ch2; 
                num2--;
                if (num > 0) pq.push({ch, num});
                if (num2 > 0) pq.push({ch2, num2});
            }
        }
        return ans;
    }
};
