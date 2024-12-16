class Solution {
public:
    int findDelayedArrivalTime(int arr, int del) {
        return (arr+del)%24;
    }
};