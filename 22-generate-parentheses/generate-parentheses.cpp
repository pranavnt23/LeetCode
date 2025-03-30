class Solution {
public:
    void genpar(int open_re,int close_re,string s,vector<string>& ress){
        if(open_re==0 && close_re==0) {
            ress.push_back(s);return;
        }
        if(open_re>0){
            string cs=s+'(';
            genpar(open_re-1,close_re,cs,ress);
        }
        if(open_re<close_re){
            string cs=s+')';
            genpar(open_re,close_re-1,cs,ress);
        }
    }
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string> ress;
        genpar(n,n,s,ress);
        return ress;
    }
};