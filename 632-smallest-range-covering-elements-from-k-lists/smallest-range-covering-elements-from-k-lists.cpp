class Tracker {
public:
    int val;
    int index;
    int column;
    
    Tracker(int v, int i, int c) : val(v), index(i), column(c) {}
};

// Comparator for priority queue to sort by val
struct Compare {
    bool operator()(const Tracker& a, const Tracker& b) {
        return a.val > b.val; // Min-heap based on val
    }
};

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<Tracker, vector<Tracker>, Compare> track;
        int maxVal = INT_MIN;
        int n = nums.size();
        int startRange = 0;
        int endRange = INT_MAX;

        // Initialize the heap with the first element of each list
        for (int i = 0; i < n; ++i) {
            int val = nums[i][0];
            track.push(Tracker(val, i, 0));
            maxVal = max(maxVal, val);
        }

        // While the heap contains one element from each list
        while (track.size() == n) {
            Tracker temp = track.top();
            track.pop();

            // Update the range if the current range is smaller
            if (maxVal - temp.val < endRange - startRange) {
                startRange = temp.val;
                endRange = maxVal;
            }

            // If there is a next element in the current list, add it to the heap
            if (temp.column + 1 < nums[temp.index].size()) {
                int nextVal = nums[temp.index][temp.column + 1];
                track.push(Tracker(nextVal, temp.index, temp.column + 1));
                maxVal = max(maxVal, nextVal);
            }
        }

        return {startRange, endRange};
    }
};