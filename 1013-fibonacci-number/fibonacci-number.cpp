class Solution {
public:
    int fib(int n) {
        vector<int> fib;
        if(n==1||n==0) return n;
        fib.push_back(0);
        fib.push_back(1);
        for(int i=2;i<=n;i++){
            fib.push_back(fib[i-1]+fib[i-2]);
        }
        return fib[n];
    }
};