class Solution {
public:
    int numberOfMatches(int n) {
   
    /*    int num=0;
        while(n>1){
            if(n%2==0){n=n/2;num+=n;}
            else{n=(n/2)+1;num+=(n-1);}
        }
        return num;*/
        return n-1;
    }
};