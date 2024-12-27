class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans = INT_MIN;


        int left = values[0];

        for (int i = 1; i < values.size(); i++) {
            int right = values[i] - i;

            ans = max(ans, left + right);
            left = max(left, values[i] + i);
        }

        return ans;
    }
};