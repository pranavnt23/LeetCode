class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;  

        for (auto &ele : timePoints) {
            int hr = stoi(ele.substr(0, 2));  
            int mi = stoi(ele.substr(3));     
            minutes.push_back(hr * 60 + mi);  
        }

        sort(minutes.begin(), minutes.end());

        int minDiff = 1440;  

        for (int i = 1; i < minutes.size(); ++i) {
            minDiff = min(minDiff, minutes[i] - minutes[i - 1]);
        }

        int circularDiff = 1440 + minutes[0] - minutes.back();  
        minDiff = min(minDiff, circularDiff);

        return minDiff;
    }
};