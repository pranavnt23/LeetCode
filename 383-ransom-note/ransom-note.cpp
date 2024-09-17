#pragma GCC optimize("O2")
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
#define FOR(a, b, c) for (int a = b; a < c; a++)
#define FOR1(a, b, c) for (int a = b; a <= c; ++a)
#define Rep(i, n) FOR(i, 0, n)
#define Rep1(i, n) FOR1(i, 1, n)
#define RepA(ele, nums) for (auto& ele : nums)
#define WHL(i, n) while (i < n)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26] = {};
        RepA(c, magazine) arr[c - 'a']++;
        RepA(w, ransomNote) {
            int idx = w - 'a';
            arr[idx]--;
            if (arr[idx] == -1)
                return false;
        }
        return true;
    }
};