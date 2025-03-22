class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_map<char, int> hmap;
        int left = 0, max_len = 0;

        for (int right = 0; right < str.size(); right++) {
            if (hmap.find(str[right]) != hmap.end()) {
                left = max(left, hmap[str[right]] + 1);
            }
            hmap[str[right]] = right;
            max_len = max(max_len, right - left + 1);
        }

        return max_len;
    }
};
