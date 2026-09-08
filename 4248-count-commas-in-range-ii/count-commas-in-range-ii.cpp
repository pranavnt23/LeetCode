class Solution {
public:
    long long calculateCommas(long long n){
        long long commas=0,start=1000;
        while(start<=n){
            commas+=n-start+1;
            if (start > n / 1000)
                break;
            start *= 1000;
        }
        return commas;   
    }

    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long res=calculateCommas(n);
        return res;
    }
};