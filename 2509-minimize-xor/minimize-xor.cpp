class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int st=__builtin_popcount(num2);
        int res=0,sbcnt=0,cb=31;
        while(sbcnt<st){
            if(isSet(num1,cb)||
            (st-sbcnt > cb)){
                setBit(res,cb);sbcnt++;
            }
            cb--;
        }
        return res;
    }
private:
    bool isSet(int x,int bit){return x & (1<<bit);}
    void setBit(int &x, int bit){x|= (1<<bit);}
};