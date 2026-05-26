class Solution {
public:
    int fib(int n) {
        int fib=0,prev=0,curr=1;
        if(n==1) return 1;
        for(int i=1;i<n;i++){
            fib=0;
            fib=prev+curr;
            prev=curr;
            curr=fib;
        }
        return fib;
    }
};