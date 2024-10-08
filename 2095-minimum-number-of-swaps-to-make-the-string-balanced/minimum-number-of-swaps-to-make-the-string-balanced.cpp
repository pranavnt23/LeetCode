class Solution {
public:
    int minSwaps(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int unbal=0,swp=0;
        for(char str:s){
            if(str==']'){
                if(unbal==0){
                    unbal++;swp++;
                }
                else{
                    unbal--;
                }
            }
            else{unbal++;}
        }
        return swp;
    }
};