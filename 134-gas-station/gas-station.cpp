class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int left = 0, right = INT_MIN, rem = 0;
        bool ini = false;
        while(left < 2*n) {
            rem += gas[left%n]-cost[left%n];
            if(left > right && left%n == right) {
                return right;
            }
            if(rem >= 0) {
                if(!ini) {
                    right = left%n;
                    ini = true;
                }
                left++;
            }
            else {
                rem=0;
                left++;
                right = INT_MIN;
                ini = false;
            }
        }
        return -1;
    }
};