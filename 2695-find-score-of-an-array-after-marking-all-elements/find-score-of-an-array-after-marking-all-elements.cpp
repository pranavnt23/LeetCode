class Solution {
public:
    long long findScore(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);

        long long ans = 0;
        int n = nums.size();
        vector<bool> seen(n, false);

        // Min-heap to process elements in ascending order of value
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

        // Push all elements with <value, index>
        for (int i = 0; i < n; i++) {
            pq.push({nums[i], i});
        }

        // Process the priority queue
        while (!pq.empty()) {
            int value = pq.top().first;
            int index = pq.top().second;
            pq.pop();

            // If this index is not yet processed
            if (!seen[index]) {
                // Add current value to the score
                ans += value;

                // Mark current index and its neighbors as seen
                seen[index] = true;
                if (index - 1 >= 0) seen[index - 1] = true;
                if (index + 1 < n) seen[index + 1] = true;
            }
        }

        return ans;
    }
};
