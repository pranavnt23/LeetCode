class Solution {
public:
    int clumsy(int n) {
        stack<int> stk;
        //first ele push
        //i%4==0 then *
        //i%4==1 then /
        //i%4==2 then +
        //i%4==3 then -
        int cnt=0,num;
        for(int i=n;i>=1;i--){
            if(stk.empty()){stk.push(i);}
            else{
            switch(cnt%4){
                case 0:
                    num=stk.top();stk.pop();
                    stk.push(i*num);
                    break;
                case 1:
                    num=stk.top();stk.pop();
                    stk.push(num/i);
                    break;
                case 2:
                    stk.push(i);
                    break;
                case 3:
                    stk.push(-i);
                    break;
            }
            cnt++;
            }
        }
        int ans=0;
        while(!stk.empty()){
            ans+=stk.top();
            stk.pop();
        }
        return ans;
    }
};