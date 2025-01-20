#include <vector>
#include <unordered_map>
#include <utility> // For std::pair
#include <functional> // For hash

using namespace std;

class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        vector<int> rc(mat.size(), 0); // Row completion counter
        vector<int> cc(mat[0].size(), 0); // Column completion counter

        unordered_map<int, pair<int, int>> hmap; // Maps matrix value to its position

        // Fill the hashmap with matrix elements and their positions
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                hmap[mat[i][j]] = {i, j}; // Store the row and column as a pair
            }
        }

        // Iterate through the array and update row/column counters
        for (int i = 0; i < arr.size(); i++) {
            int ele = arr[i];
            auto pos = hmap[ele]; // Get the row and column of the current element
            int r = pos.first;
            int c = pos.second;

            rc[r]++; // Increment row counter
            cc[c]++; // Increment column counter

            // Check if the row or column is complete
            if (rc[r] == mat[0].size()) return i; // Row is complete
            if (cc[c] == mat.size()) return i; // Column is complete
        }

        return -1; // No row or column completed
    }
};
