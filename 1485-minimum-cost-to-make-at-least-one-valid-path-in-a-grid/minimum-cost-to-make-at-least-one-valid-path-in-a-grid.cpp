#include <bits/stdc++.h>
using namespace std;

class Solution {
    #define pip pair<int, pair<int, int>>

    bool isValid(int& x, int& y, int& m, int& n) {
        return (x < m && y < n && x >= 0 && y >= 0);
    }

public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        priority_queue<pip, vector<pip>, greater<pip>> minheap;
        minheap.push(make_pair(0, make_pair(0, 0))); 
        vector<int> dx = {0, 0, 1, -1};
        vector<int> dy = {1, -1, 0, 0};

        while (!minheap.empty()) {
            pip curr = minheap.top(); minheap.pop();

            int cost = curr.first;
            int x = curr.second.first, y = curr.second.second;

            if (visited[x][y]) {
                continue;
            }
            if (x == m - 1 && y == n - 1) {
                return cost;
            }
            visited[x][y] = true;

            for (int i = 0; i < 4; i++) {
                int dirx = x + dx[i], diry = y + dy[i];
                if (isValid(dirx, diry, m, n) && !visited[dirx][diry]) {
                    int newCost = cost;
                    newCost += (i + 1) == grid[x][y] ? 0 : 1;
                    minheap.push(make_pair(newCost, make_pair(dirx, diry)));
                }
            }
        }
        return -1;
    }
};
