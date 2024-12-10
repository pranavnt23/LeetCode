class Solution {
 public:
  int maximumLength(string s) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    const int n = s.length();
    int ans = -1;
    int runningLen = 0;
    char prevLetter = '@';
    vector<vector<int>> counts(26, vector<int>(n + 1));
    for (const char c : s)
      if (c == prevLetter) {
        ++counts[c - 'a'][++runningLen];
      } else {
        runningLen = 1;
        ++counts[c - 'a'][runningLen];
        prevLetter = c;
      }
    for (const vector<int>& count : counts){
      ans = max(ans, getMaxFreq(count, n));
    }
    return ans;
  }

 private:
  int getMaxFreq(const vector<int>& count, int maxFreq) {
    int times = 0;
    for (int freq = maxFreq; freq >= 1; --freq) {
      times += count[freq];
      if (times >= 3)
        return freq;
    }
    return -1;
  }
};