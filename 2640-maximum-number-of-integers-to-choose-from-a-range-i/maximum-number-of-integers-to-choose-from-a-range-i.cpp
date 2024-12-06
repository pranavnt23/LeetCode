class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);cout.tie(nullptr);
        int sum=0,count=0;
        set<int> sett;
        for(int i=0;i<banned.size();i++){
            sett.insert(banned[i]);
        }
        for(int i=1;i<=n;i++){
            if(sett.find(i)==sett.end()){
                if((sum+i)<=maxSum){
                    sum+=i;count++;
                }
                else{break;}
            }
        }
        return count;
    }
};